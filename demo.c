
#include <ncurses.h>
#include <curses.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

 initscr();
 noecho();
 curs_set(FALSE);
 
 mvprintw(0,0,"Hello, world!");
 refresh();

 sleep(1);

 endwin(); // Restore normal terminal behavior
}
