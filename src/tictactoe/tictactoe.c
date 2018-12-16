//file:             tictactoe.c 
//Author:           Osmar D. G.
//Compile and run. Copy and paste any of the next two lines in the
//terminal where you save this file:
// (1)  CC="clang -std=c11 -g -Wall -O3" make tictactoe && ./tictactoe
// (2)  CC="gcc -std=c11 -g -Wall -O3" make tictactoe && ./tictactoe
// If the compiler predate C11 try -std=c99, instead, or
// (3)  CC="c99 -g" make tictactoe && ./tictactoe 
//
// *c99 is the compiler as required by the IEEE Std 1003.1 (“POSIX.1”) 2001 standard.
//
// Tested with gcc-4.8.1 and clang-32 for Debian 64 bits,
// clang-3.2, gcc-4.7.2 for openSUSE 32 bits and c99 for both systems.
// 
// Compiler for Windows users:
// http://www.smorgasbordet.com/pellesc/ (C99 and C11 comformant dev suite!).

#include <stdio.h>   // IO
#include <stdbool.h> // ISO C Standard:  7.16  Boolean type and values
#include <iso646.h>  // ISO C Standard:  7.9  Alternative spellings
#include <ctype.h>   // isdigit

#define and	&&
#define or ||	
#define not !


//Typedef a type for the matrix
typedef char charmat3x3_t [3][3];

//The players
const struct Players_
{
  char name [2][15]; //
  char figure [2];   // 'O' or 'X'
}

who_plays =
{
    .name = { {"Player 1"}, {"Player 2"} },
    .figure = { 'X', 'O'  }
};//End of Players_

//=========
//Functions
//=========
//This sort of flatten the matrix
//Usage:
//get_board_square(&board)[index] = 'figure' (X or O).
//I was tempted to make this a macro
//The optimizer probably will inline 'get_board_square'
static char* get_board_square(charmat3x3_t* restrict matrix) { return ((char*)&(*matrix)); }

//Uncomment the next line and commenting 'get_board_square' above for testing the inline keyword 
//with your compiler
//inline char* get_board_square(charmat3x3_t* restrict matrix) { return ((char*)&(*matrix)); }
static void flush_stdin(void) { while(getc(stdin)!='\n') continue; }
static void clear_screen(void) { int lines=25; while(--lines) puts(""); }


int read_int(const char * restrict prompt)
{
 printf("read_int(%s)\r\n", prompt);
 printf(prompt);
 int n=0; scanf("%d", &n);
 flush_stdin();
 return n;
}

void fill_board(charmat3x3_t * restrict matrix)
{
  char ch = '1';
  for(size_t i=0; i<9; ++i)
    //same as: *((char*)&(*matrix)+i) = ch++;
    get_board_square(matrix)[i] = ch++;
}

//check fro a winner
bool check_for_winner(charmat3x3_t board)
{
       // diagonals first
    if((board[0][0]==board[1][1] and board[0][0]==board[2][2])
        or
      (board[0][2]==board[1][1] and board[0][2]==board[2][0]))
                        return true;
    else
    {
        // check rows and columns
        for(size_t line = 0; line<3; ++line)
        {
            if((board[line][0] == board[line][1] and board[line][0] == board[line][2])
                or
              (board[0][line] == board[1][line] and board[0][line] == board[2][line]))
                return true;
        }
    }
    return false;

}

//Dont care much for pretty printing just yet
void print_board(charmat3x3_t matrix)
{
  for(size_t i=0; i<3; ++i)
  {
    printf("\n%*s", 25, "");
    for(size_t j=0; j<3; ++j)
        printf("%3c",  matrix[i][j]);
  }
  puts("\n\n");//print 3 lines
}
//=======================================================
//                      Game
//=======================================================
int main(void)
{
    //Tic Tac Tow Board
    charmat3x3_t board;
    fill_board(&board);

    const int chances = 9;
    int player = {0}; //player in turn
    bool have_a_winner = false;
    const int game_mode = 2; //Two players mode
    char prompt[50];

    //This is the Game
    for(int turn=0; turn<chances and not have_a_winner; ++turn)
    {
        //Display the board
        print_board(board);
        //Get the player
        player = turn % game_mode;

        int cell=0;
        //Get a valid cell
        do{
            sprintf(prompt, "%s, where do you want to place the \"%c\":  ",
                who_plays.name[player], who_plays.figure[player]);

            cell = read_int(prompt);
            //User sees 1 when it is actually cell 0
            --cell;
        }
        //isdigit('X') == false
        while(cell<0 or cell>8 or not isdigit(get_board_square(&board)[cell]));
        //Set player figure
        get_board_square(&board)[cell] = who_plays.figure[player];

        //We might get a winna after the 5th turn
        switch(turn)
        {
            case 4: case 5: case 6: case 7: case 8:
                have_a_winner = check_for_winner(board);
            break; //break from switch not for
        }//end of switch

        //comment if you dont care for a clean window
        clear_screen();
    }
    //Print it here again cos the last play doesn't show inside the for loop
    print_board(board);
    if(have_a_winner)
        printf("Congrats %s with '%c', you won!!!\n\n", 
	       who_plays.name[player], who_plays.figure[player]);
    else
        puts("Boring!! It's draw....\n\n");
}

