#include "adventure.h"

#define GAMEFONT	"/bmf/P/Prince/Prince.bmf"

#define MAX_LINEBUFFER	2048
#define DIR_NULL	0
#define DIR_N		1
#define DIR_E		2
#define DIR_S		3
#define DIR_W		4
#define DIR_NE		5
#define DIR_SE		6
#define DIR_SW		7
#define DIR_NW		8
#define DIR_UP		9
#define DIR_DOWN	10
#define DIR_ENTER	11
#define DIR_EXIT	12

#define MAX_DIRECTIONS	255


typedef struct movement_vectors {
    char *name;
    uint8_t vector;
} movement_vectors;


movement_vectors mv[] = {
    { "n", DIR_N },
    { "s", DIR_S },
    { "e", DIR_E },
    { "w", DIR_W },
    { "enter", DIR_ENTER },
    { "exit", DIR_EXIT },
    { NULL, DIR_NULL }
};


typedef struct room_description {
    uint16_t roomid;
    char *name;
    char *verbose;
    const char *artwork;
    uint16_t directions[13];
} room_description;

/* the NULL room is room #0, which can only be exited, and is used for testing, but the game proper should start with room #1 */
#define DEFAULT_ROOM	0
uint16_t current_room = DEFAULT_ROOM;

room_description room_list[] = {

    {   0, "The NULL Room", "This space intentionally left blank. It is dark. You are likely to be eaten\n\rby a grue. ", NULL,
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    },
    {   1, "House in Forest", "You are standing outside an eerie abandoned house in a dark forest You can\n\rhear running water to the east.", "/adventure/forest.raw.zx0",
        { 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 }
    },
    {   2, "Living Room", "You are in a dark and dreary living room inside the house. Dim light filters\r\nin through the windows.", "/adventure/livingroom.raw.zx0",
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }
    },
    {   3, "River Bank", "You are standing on a rocky river bank. The water flows quickly.\n\rA path leads west.", "/adventure/flowingriver.raw.zx0",
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 }
    }
};

uint16_t current_score = 0;
uint16_t max_score = 0xFFFF;
uint16_t current_move = 0;
bool debug = true;
bool verbose = true;


int verb_quit(char *s)
{
    vt_cls();
    set_cursor(0,0);
    printf("Quitting ...\n\r\n\r");
    bmf_loadfont("/bmf/8x8.bmf");

    exit(0);

}

void load_font()
{
    bmf_loadfont(GAMEFONT);
}

void chop(char *s)
{
    int l = 0;
    int i = 0;
    l = strlen(s);
    for (i = 0 ; i < l; i++) {
        if ((s[i] == '\n' || s[i] == '\r')) {
            s[i] = '\0';
        }

    }
    return;
}

bool isvowel(char c)
{
    if (strchr("AEIOUaeiou", c)) {
        return true;
    }
    return false;
}

int process_direction(const char *inp)
{
    int i = 0;
    if (debug) {
        //printf("process_direction(%s);\n\r", inp);
    }

    for (i = 0; i < MAX_DIRECTIONS; i++) {
        /* end of list */
        if (mv[i].vector == DIR_NULL || mv[i].name == NULL) {
            return DIR_NULL;
        }
        if (strncmp(inp, mv[i].name, strlen(mv[i].name)) == 0 && strlen(inp) && (strlen(inp) == strlen(mv[i].name))) {
            //printf("match: %s -> %u\n\r", inp, mv[i].vector);
            return mv[i].vector;
        }
    }
    /* otherwise, not found */
    return DIR_NULL;
}


int process_input(const char *inp)
{
    uint8_t md = DIR_NULL;
    uint16_t new_roomid = 0;
    if (debug) {
        //printf("process_input(%s);\n\r", inp);
    }

    /* assume its a direction for now */

    md = process_direction(inp);

    new_roomid = get_new_roomid(current_room, md);

    if (!new_roomid) {
        printf("You can't go that way ('%s').\n\r", inp);
        return 0;
    }

    current_room = new_roomid;
    load_current_room(current_room);
    current_move ++;

    return 1;
}

uint16_t get_new_roomid(uint16_t roomid, uint8_t direction)
{
    return room_list[roomid].directions[direction];
}

void display_score(uint16_t roomid)
{

    set_cursor(0, 0);
    vt_setbg(ANSI_FOREGROUND_WHITE);
    vt_setfg(ANSI_BACKGROUND_BLACK);
    for (int i = 0; i < 79; i++) {
        printf("%c", ' ');
    }
    set_cursor(1, 0);
    printf("%s", room_list[roomid].name);
    set_cursor(58, 0);
    printf("Score: %03u Moves: %03u ", current_score, current_move);
    vt_setfg(ANSI_FOREGROUND_WHITE);
    vt_setbg(ANSI_BACKGROUND_BLACK);
    set_cursor(0, 24);
}

int load_current_room(uint16_t roomid)
{

    static char *my_argv[] = {"dzx0_main", NULL, NULL };
    room_description *rd = NULL;
    vt_cls();
    set_cursor(0, 20);
    /* clear viewport */
    rd = &room_list[roomid];

    //printf("%s\n\r", rd->name);
    if (verbose && rd->verbose) {
        printf("%s\n\r", rd->verbose);
    }

    list_objects_in_room(roomid);

    if (rd->artwork) {
        my_argv[1] = rd->artwork;
        dzx0_main(3, my_argv);
    }


    display_score(current_room);
    set_cursor(0, 24);

    return 0;
}


int main(int argc, char *argv[])
{
    //static uint16_t current_room = DEFAULT_ROOM;
    char linebuffer[MAX_LINEBUFFER];
    /* move cursor, clear screen */
    set_cursor(0, 20);
    /* load current scene to RAM at 0x800000, then copy it to 0x2000000 */

    load_font();

    load_current_room(current_room);

    while (1) {
        int n = 0;
        set_cursor(0, 24);
        puts("> ");
        for (int i = 0; i < 78; i++) {
            putchar(' ');
        }
        set_cursor(2, 24);

        // n = read(0, &buffer, 15);
        memset(&linebuffer, 0, MAX_LINEBUFFER);
        n = read(0, &linebuffer, MAX_LINEBUFFER-1);
        //fgets(&linebuffer, MAX_LINEBUFFER-1, stdin);
        chop(&linebuffer);
        printf("\n\r\n\r");
        //process_input((const char *) &linebuffer);
        parse((const char *) &linebuffer);
        display_score(current_room);
    }
    exit(0);

}
