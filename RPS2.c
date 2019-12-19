#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

int rock();
int paper();
int scissors();
int reload();

int main(void){
	initscr();
	noecho();
	curs_set(FALSE);

int i;
int P1score =0;
int P2score =0;

int choiceP1;
int choiceP2;

	printf("Rock=1 , Paper= 2, and Scissors= 3\n");

	printf("Enter your choice P1:");
		scanf("%d",&choiceP1);
	printf("Enter you Choice P2:");
		scanf("%d",&choiceP2);

	if(choiceP1==1 && choiceP2==1){ 
	choiceP1=mvprintw(10, 33, "    ***      ");
                 mvprintw(10, 33, "   *****     ");
                 mvprintw(11, 33, "   ******    ");
                 mvprintw(12, 33, "   *****     ");
                 mvprintw(13, 33, "    ***      ");
                 mvprintw(13, 33, "     *        ");

	choiceP2=mvprintw(10, 33, "    ***      ");
                 mvprintw(10, 33, "   *****     ");
                 mvprintw(11, 33, "   ******    ");
                 mvprintw(12, 33, "   *****     ");
                 mvprintw(13, 33, "    ***      ");
                 mvprintw(13, 33, "     *        ");

		printf("Draw\n");
	}

	else if(choiceP1==2 && choiceP2==1){
	choiceP1=mvaddstr(10, 33, "    ******   ");
 		 mvaddstr(10, 33, "   ******    ");
 		 mvaddstr(11, 33, "   *****     ");
 		 mvaddstr(12, 33, "  *****      ");
 		 mvaddstr(13, 33, " *****       ");
 		 mvaddstr(13, 33, " ****        ");

	choiceP2=mvprintw(10, 33, "    ***      ");
                 mvprintw(10, 33, "   *****     ");
                 mvprintw(11, 33, "   ******    ");
                 mvprintw(12, 33, "   *****     ");
                 mvprintw(13, 33, "    ***      ");
                 mvprintw(13, 33, "     *        ");
 
		printf("Player 1 Wins\n");
		P1score= P1score + 1;
		}
	else if(choiceP1==3 && choiceP2==1){
	choiceP1=mvaddstr(10, 33, "  **    **   ");
  		mvaddstr(10, 33, "   **  **    ");
  		mvaddstr(11, 33, "    ****     ");
  		mvaddstr(12, 33, "    ***      ");
  		mvaddstr(13, 33, "  **   **    ");
  		mvaddstr(13, 33, "  **   **    ");

	choiceP2=mvaddstr(10, 33, "    ***      ");
  		mvaddstr(10, 33, "   *****     ");
  		mvaddstr(11, 33, "   ******    ");
  		mvaddstr(12, 33, "   *****     ");
  		mvaddstr(13, 33, "    ***      ");
  		mvaddstr(13, 33, "     *        ");
 
		printf("Player 2 Wins\n");
		P2score = P2score + 1;
		}

	else if(choiceP1==1 && choiceP2==2){
	choiceP1=mvaddstr(10, 33, "    ***      ");
 		mvaddstr(10, 33, "   *****     ");
  		mvaddstr(11, 33, "   ******    ");
 		mvaddstr(12, 33, "   *****     ");
		mvaddstr(13, 33, "    ***      ");
 		mvaddstr(13, 33, "     *        ");

	choiceP2=mvaddstr(10, 33, "    ******   ");
		mvaddstr(10, 33, "    ******    ");
		mvaddstr(11, 33, "   ******     ");
		mvaddstr(12, 33, "  ******      ");
		mvaddstr(13, 33, " ******       ");
		mvaddstr(13, 33, " *****        ");

		printf("Player 2 Wins! \n");
		P2score= P2score + 1;
			}
	else if(choiceP1==2 && choiceP2==2){
	choiceP1=mvaddstr(10, 33, "    ******   ");
		mvaddstr(10, 33, "    ******    ");
		mvaddstr(11, 33, "   ******     ");
		mvaddstr(12, 33, "  ******      ");
		mvaddstr(13, 33, " ******       ");
		mvaddstr(13, 33, " *****        ");

	choiceP2=mvaddstr(10, 33, "    ******   ");
		mvaddstr(10, 33, "    ******    ");
		mvaddstr(11, 33, "   ******     ");
		mvaddstr(12, 33, "  ******      ");
		mvaddstr(13, 33, " ******       ");
		mvaddstr(13, 33, " *****        ");

		printf("Draw\n");
			}
	else if(choiceP1==3 && choiceP2==2){
	choiceP1=mvaddstr(10, 33, "  **    **   ");
		mvaddstr(10, 33, "   **  **    ");
		mvaddstr(11, 33, "    ****     ");
		mvaddstr(12, 33, "    ***      ");
		mvaddstr(13, 33, "  **   **    ");
		mvaddstr(13, 33, "  **   **    ");
	choiceP2=mvaddstr(10, 33, "    ******   ");
		mvaddstr(10, 33, "   ******    ");
		mvaddstr(11, 33, "   *****     ");
		mvaddstr(12, 33, "  *****      ");
		mvaddstr(13, 33, " *****       ");
		mvaddstr(13, 33, " ****        ");

		printf("Player 1 Wins!\n");
		P1score= P1score + 1;
			}
	else if (choiceP1==1 && choiceP2==3){
	choiceP1=mvaddstr(10, 33, "    ***      ");
		mvaddstr(10, 33, "   *****     ");
		mvaddstr(11, 33, "   ******    ");
		mvaddstr(12, 33, "   *****     ");
		mvaddstr(13, 33, "    ***      ");
		mvaddstr(13, 33, "     *        ");
	choiceP2=mvaddstr(10, 33, "  **    **   ");
		mvaddstr(10, 33, "   **  **    ");
		mvaddstr(11, 33, "    ****     ");
		mvaddstr(12, 33, "    ***      ");
		mvaddstr(13, 33, "  **   **    ");
		mvaddstr(13, 33, "  **   **    ");
		printf("Player 1 Wins\n");
		P1score= P1score + 1;
	}
	else if (choiceP1==2 && choiceP2==3){
	choiceP1=mvaddstr(10, 33, "    ******   ");
		mvaddstr(10, 33, "    *****    ");
		mvaddstr(11, 33, "   *****     ");
		mvaddstr(12, 33, "  *****      ");
		mvaddstr(13, 33, " *****       ");
		mvaddstr(13, 33, " ****        ");
	choiceP2=mvaddstr(10, 33, "  **    **   ");
		mvaddstr(10, 33, "   **  **    ");
		mvaddstr(11, 33, "    ****     ");
		mvaddstr(12, 33, "    ***      ");
		mvaddstr(13, 33, "  **   **    ");
		mvaddstr(13, 33, "  **   **    ");

		printf("Player 2 Wins\n");
		P2score= P2score + 1;
	}
	else if (choiceP1==3 && choiceP2==3){
	choiceP1=mvaddstr(10, 33, "  **    **   ");
		mvaddstr(10, 33, "   **  **    ");
		mvaddstr(11, 33, "    ****     ");
		mvaddstr(12, 33, "    ***      ");
		mvaddstr(13, 33, "  **   **    ");
		mvaddstr(13, 33, "  **   **    ");
	choiceP2=mvaddstr(10, 33, "  **    **   ");
		mvaddstr(10, 33, "   **  **    ");
		mvaddstr(11, 33, "    ****     ");
		mvaddstr(12, 33, "    ***      ");
		mvaddstr(13, 33, "  **   **    ");
		mvaddstr(13, 33, "  **   **    ");
	printf("Draw\n")
	}

}


	else{
		printf("Wrong Answer\n");
		}


	if(P1score > P2score ){
		printf("Player 1 wins %d to %d\n",Cscore,Pscore);
		}
	else if(P1score < P2score ){
		printf("Player 2 wins %d to %d\n",Pscore,Cscore);
		}
	else if(P1score = P2score ){
		printf("No winner it is a draw!\n");
	}


	return 0;
	}
}



