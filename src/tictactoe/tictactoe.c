// Tic Tac Toe Game! Player(X) vs Computer(O)
// Faheem Hassan Zunjani


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char data[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int check(){
  if(data[0][0]=='X'&&data[1][0]=='X'&&data[2][0]=='X')
    { return 1;
    }
  else if(data[0][0]=='O'&&data[1][0]=='O'&&data[2][0]=='O')
    { return 2;
    }
  else if(data[0][1]=='X'&&data[1][1]=='X'&&data[2][1]=='X')
    { return 1;
    }
  else if(data[0][1]=='O'&&data[1][1]=='O'&&data[2][1]=='O')
    { return 2;
    }
  else if(data[0][2]=='X'&&data[1][2]=='X'&&data[2][2]=='X')
    { return 1;
    }
  else if(data[0][2]=='O'&&data[1][2]=='O'&&data[2][2]=='O')
    { return 2;
    }
  else if(data[0][0]=='X'&&data[0][1]=='X'&&data[0][2]=='X')
    { return 1;
    }
  else if(data[0][0]=='O'&&data[0][1]=='O'&&data[0][2]=='O')
    { return 2;
    }
  else if(data[1][0]=='X'&&data[1][1]=='X'&&data[1][2]=='X')
    { return 1;
    }
  else if(data[1][0]=='O'&&data[1][1]=='O'&&data[1][2]=='O')
    { return 2;
    }
  else if(data[2][0]=='X'&&data[2][1]=='X'&&data[2][2]=='X')
    { return 1;
    }
  else if(data[2][0]=='O'&&data[2][1]=='O'&&data[2][2]=='O')
    { return 2;
    }
  else if(data[0][0]=='X'&&data[1][1]=='X'&&data[2][2]=='X')
    { return 1;
    }
  else if(data[0][0]=='O'&&data[1][1]=='O'&&data[2][2]=='O')
    { return 2;
    }
  else if(data[0][2]=='X'&&data[1][1]=='X'&&data[2][0]=='X')
    { return 1;
    }
  else if(data[0][2]=='O'&&data[1][1]=='O'&&data[2][0]=='O')
    { return 2;
    }
  else 
    { return 3;
    }
}	

int main(){
  
	vt_cls();
  
  time_t t;                          // Declaring time variable for rand()
  srand((unsigned) time(&t));        // Seeding srand() with time

  int i=0,j=0,k=0,pos1,pos2,flag=3,chk=0,v=0;
 
  char ch='|';
  
  while(i<9&&(flag!=1&&flag!=2))
    { printf("\r\nTic Tac Toe (X vs O)! \r\n\r\n");
      printf("Use positions as (1,0),(0,2),(2,2)! \r\n\r\n\r\n");
          
      for(j=0;j<3;j++)               // Printing the array elements
	{ printf("   %c  %c  %c  %c  %c \r\n",data[j][0],ch,data[j][1],ch,data[j][2]);
	  if(j!=2)
	    { printf("------------------- \r\n");
	    }
	}
      
      printf("\r\n\r\n");

      if(i%2==0)                    // Alternating player-computer moves
	{ printf("Player: ");
	  scanf("%d,%d",&pos1,&pos2);
	  chk=0;
	  do
	    { if(data[pos1][pos2]=='X'||data[pos1][pos2]=='O')
		{ printf("\r\nAlready used! Re-enter:");
		  scanf("%d,%d",&pos1,&pos2);
		  chk=0;
		}
	      else
		{ chk=1;
		}
	    }while(chk==0);

	  data[pos1][pos2]='X';
	  flag=check();
	}
      else
	{ chk=0;
	  do	
	    { pos1=rand()%3;
	      pos2=rand()%3;
	      if(data[pos1][pos2]=='O'||data[pos1][pos2]=='X')
		{ chk=0;
		}
	      else
		{ chk=1;
		}
	    }while(chk==0);

	  printf("Computer: %d,%d \r\n",pos1,pos2);
	  data[pos1][pos2]='O';
	  flag=check();
	}
      
      i++;
      
      if(flag==3)
	{ 
		vt_cls();                  // Clears screen
	}
     }
    
	vt_cls();
  printf("\r\nTic Tac Toe (X vs O)! \r\n\r\n");
  printf("Use positions as (1,0),(0,2),(2,2)! \r\n\r\n\r\n");
          
  for(j=0;j<3;j++)        
    { printf("   %c  %c  %c  %c  %c \r\n",data[j][0],ch,data[j][1],ch,data[j][2]);
      if(j!=2)
	{ printf("------------------- \r\n");
	}
    }
      
  printf("\r\n");
  if(flag==1)
    { printf("\r\n\r\n Player wins! :D\r\n\r\n");
    }
  else if(flag==2)
    { printf("\r\n\r\n Computer wins! :D\r\n\r\n");
    }
  else
    { printf("\r\n\r\n Its a Tie!\r\n\r\n");
    }
	
	return 0;	
	
}
