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


int paper1(){
	mvaddstr(10, 13, "    ******   ");
	mvaddstr(12, 13, "   ******    ");
	mvaddstr(13, 13, "   *****     ");
	mvaddstr(14, 13, "  *****      ");
	mvaddstr(15, 13, " *****       ");
	mvaddstr(16, 13, " ****        ");
}
int paper2(){
	mvaddstr(10, 33, "    ******   ");
        mvaddstr(12, 33, "   ******    ");
        mvaddstr(13, 33, "   *****     ");
        mvaddstr(14, 33, "  *****      ");
        mvaddstr(15, 33, " *****       ");
        mvaddstr(16, 33, " ****        ");

}

int scissors1(){
	mvaddstr(10, 13, "  **    **   ");
	mvaddstr(11, 13, "   **  **    ");
	mvaddstr(12, 13, "    ****     ");
	mvaddstr(13, 13, "    ***      ");
	mvaddstr(14, 13, "  **   **    ");
	mvaddstr(15, 33, "  **   **    ");	
}
int scissors2(){
	mvaddstr(10, 33, "  **    **   ");
	mvaddstr(11, 33, "   **  **    ");
	mvaddstr(12, 33, "    ****     ");
	mvaddstr(13, 33, "    ***      ");
	mvaddstr(14, 33, "  **   **    ");
	mvaddstr(15, 33, "  **   **    ");
}

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

	mvaddstr(1,20,"Rock=1 , Paper= 2, and Scissors= 3");

	mvaddstr(2,20,"Enter your choice P1:");
		refresh();
		choiceP1=getch();
	mvaddstr(3,20,"Enter your choice P2:");
		refresh();
		choiceP2=getch();

	if(choiceP1=='1' && choiceP2=='1'){ 
		rockp1();
		rockp2();
		mvaddstr(4,20,"Draw");
		reload();
	}

	else if(choiceP1=='2' && choiceP2=='1'){
		paper1();
		rockp2();
		mvaddstr(4,20,"Player 1 Wins!");
		P1score= P1score + 1;
		reload();
		}
	else if(choiceP1=='3' && choiceP2=='1'){
		scissors1();
		rockp2();
		mvaddstr(4,20,"Player 2 Wins!");
		P2score = P2score + 1;
		reload();
		}

	else if(choiceP1=='1' && choiceP2=='2'){
		rockp1();
		paper2();
		mvaddstr(4,20,"Player 2 Win!")
		P2score= P2score + 1;
		reload();
			}
	else if(choiceP1=='2' && choiceP2=='2'){
		paper1();
		paper2();
		mvaddstr(4,20,"Draw");
			}
	else if(choiceP1=='3' && choiceP2=='2'){
		scissor1();
		paper2();
		mvaddstr(4,20,"Player 1 Wins!");
		P1score= P1score + 1;
			}
	else if (choiceP1=='1' && choiceP2=='3'){
		rockp1();
		scissors2();
		mvaddstr(4,20,"Player 1 Wins!");
		P1score= P1score + 1;
	}
	else if (choiceP1==2 && choiceP2==3){
		paper1();
		scissors2();
		mvaddstr(4,20,"Player 2 Wins!");
		P2score= P2score + 1;
	}
	else if (choiceP1=='3' && choiceP2=='3'){
		scissors1();
		scissors2();
		mvaddstr(4,20,"Draw");
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


