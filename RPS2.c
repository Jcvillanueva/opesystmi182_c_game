#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

int rock();
int paper();
int scissors();
int reload();

int main() {
	initscr();
	noecho();
	curs_set(FALSE);

int i;
int Pscore =0;
int Cscore =0;

int choice;
	srand(time(NULL));
	printf("Rock=1 , Paper= 2, and Scissors= 3\n");

	for(i=0;i<5;i++){
		printf("Enter your choice:");
			scanf("%d",&choice);
			int computer=rand()%3+1;
	if(choice==1){
		if(computer==1){
			printf("Draw\n");
		}
	if(computer==2){
		printf("Computer Wins!\n");
		Cscore= Cscore + 1;
		}
	if(computer==3){
		printf("Player Wins\n");
		Pscore = Pscore + 1;
		}
	}

	else  if(choice==2){
		if(computer==2){
			printf("Draw\n");
			}
		if(computer==3){
			printf("Player Wins!\n");
			Pscore = Pscore + 1;
			}
		if(computer==1){
			printf("Computer Wins!\n");
			Cscore= Cscore + 1;
			}
		}
		else if(choice==3){
			if(computer==3){
			printf("Draw\n");
			}
		if(computer==2){
			printf("Computer Wins!\n");
			Cscore= Cscore + 1;
			}
		if(computer==1){
			printf("Player Wins!\n");
			Pscore = Pscore + 1;

			}
		}
	else{
		printf("Wrong Answer\n");
		}

		}
	if(Cscore > Pscore ){
		printf("Computer wins %d to %d\n",Cscore,Pscore);
		}
	else if(Cscore < Pscore ){
		printf("Player wins %d to %d\n",Pscore,Cscore);
		}
	else if(Cscore = Pscore ){
		printf("No winner it is a draw!\n");
	}


	return 0;
}





int reload() {	
	refresh();
  	getch();
}

int  rock(){
  mvaddstr(10, 33, "    ***      ");
  mvaddstr(10, 33, "   *****     ");
  mvaddstr(11, 33, "   ******    ");
  mvaddstr(12, 33, "   *****     ");
  mvaddstr(13, 33, "    ***      ");
  mvaddstr(13, 33, "     *        ");
} 

int paper(){
  mvaddstr(10, 33, "    ******   ");
  mvaddstr(10, 33, "   ******    ");
  mvaddstr(11, 33, "   *****     ");
  mvaddstr(12, 33, "  *****      ");
  mvaddstr(13, 33, " *****       ");
  mvaddstr(13, 33, " ****        ");
}

int scissors(){
  mvaddstr(10, 33, "  **    **   ");
  mvaddstr(10, 33, "   **  **    ");
  mvaddstr(11, 33, "    ****     ");
  mvaddstr(12, 33, "    ***      ");
  mvaddstr(13, 33, "  **   **    ");
  mvaddstr(13, 33, "  **   **    ");
}

