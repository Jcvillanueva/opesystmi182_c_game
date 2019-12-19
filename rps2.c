#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

int rockp1(){
  mvaddstr(10, 13, "    ***      ");
  mvaddstr(11, 13, "   *****     ");
  mvaddstr(12, 13, "   ******    ");
  mvaddstr(13, 13, "   *****     ");
  mvaddstr(14, 13, "    ***      ");
  mvaddstr(15, 13, "     *        ");
} 


int rockp2(){
  mvaddstr(10, 33, "    ***      ");
  mvaddstr(11, 33, "   *****     ");
  mvaddstr(12, 33, "   ******    ");
  mvaddstr(13, 33, "   *****     ");
  mvaddstr(14, 33, "    ***      ");
  mvaddstr(15, 33, "     *        ");
} 


int paper();

int scissors();

int reload()
{	
	refresh();
	getch();
}

int main(void){
	initscr();
	noecho();
	curs_set(FALSE);

int i;
int P1score =0;
int P2score =0;

char choiceP1;
char choiceP2;

	mvaddstr(1,20,"ffRock=1 , Paper= 2, and Scissors= 3");

	mvaddstr(2,20,"Enter your choice P1:");
		refresh();
		choiceP1=getch();
	mvaddstr(3,20,"Enter you Choice P2:");
		refresh();
		choiceP2=getch();

	if(choiceP1=='1' && choiceP2=='1'){ 
		rockp1();
		rockp2();
		mvaddstr(4,20,"Draw");
		reload();
	}

	else if(choiceP1==2 && choiceP2==1){

		printf("Player 1 Wins\n");
		P1score= P1score + 1;
		}
	else if(choiceP1==3 && choiceP2==1){

		printf("Player 2 Wins\n");
		P2score = P2score + 1;
		}

	else if(choiceP1==1 && choiceP2==2){
		printf("Player 2 Wins! \n");
		P2score= P2score + 1;
			}
	else if(choiceP1==2 && choiceP2==2){
		printf("Draw\n");
			}
	else if(choiceP1==3 && choiceP2==2){
		printf("Player 1 Wins!\n");
		P1score= P1score + 1;
			}
	else if (choiceP1==1 && choiceP2==3){
	printf("Player 1 Wins\n");
		P1score= P1score + 1;
	}
	else if (choiceP1==2 && choiceP2==3){
		printf("Player 2 Wins\n");
		P2score= P2score + 1;
	}
	else if (choiceP1==3 && choiceP2==3){

		printf("Draw\n");
	}

	else{
		printf("Wrong Answer\n");
		}

	if(P1score > P2score ){
		printf("Player 1 wins %d to %d\n",P1score,P2score);
		}
	else if(P1score < P2score ){
		printf("Player 2 wins %d to %d\n",P2score,P1score);
		}
	else if(P1score = P2score ){
		printf("No winner it is a draw!\n");
	}

endwin();
return 0;
}


