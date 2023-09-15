#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#define DELAY 50000
#define W_BALL 30
#define H_BALL 1

WINDOW* ball;
int keyInput;

int main(int argc, char *argv[]) {
    
    //int max_x,max_y;
    int x,y;
    int dir=1;
    int xmin=0,xmax=W_BALL;
    x=xmin;
    y=0;
    //getmaxyx(stdscr, max_y, max_x);
    initscr(); // std screen
    clear(); 
    noecho();  // pas d'echo des touches pressées
    cbreak();  // inteprète les touches
    curs_set(FALSE);    
    
    ball=newwin(H_BALL,W_BALL,0,1);
    keypad(ball,TRUE);
    mvprintw(LINES-1,0,"Press q to quit");
    refresh(); 
    if(has_colors() == FALSE) {
        endwin();
	printf("Your terminal does not support color\n");
	exit(1);
    }
    start_color(); /* Start color */
    init_pair(1, COLOR_RED, COLOR_BLACK);
    wattron(ball,A_BOLD);
    wrefresh(ball);
    wtimeout(ball,50);
    while (1) {
        keyInput = wgetch(ball);
        if (keyInput == KEY_LEFT){
                dir=-1;
        } else if (keyInput == KEY_RIGHT) {
                dir=1;
        } else if (keyInput == 'q') {
                break;
        }
        wattron(ball,COLOR_PAIR(1));
        mvwaddch(ball,y,0   ,'o');
        mvwaddch(ball,y,W_BALL-1,'o');
        wattroff(ball,COLOR_PAIR(1));
        wrefresh(ball);
        if (dir>0) {
            for (int i=1;i<x-xmin;i++) mvwaddch(ball,y,x-1,' ');
            x!=xmax ? mvwaddch(ball,y, x, 'o') : mvwaddch(ball,y, x, 'O');
        }
        else {
            x!=xmin ? mvwaddch(ball,y, x, 'o') :mvwaddch(ball,y, x, 'O');
            for (int i=xmax-x;i>1;i--) mvwaddch(ball,y,x+1,' ');
        }
        if ( ((x>xmax-1) && (dir>0)) || ((x<xmin+1) && (dir<0))) {
            dir*=-1;
        } else {
            x+=dir;
        } 
        wrefresh(ball);
    }
 attroff(A_BOLD);
 nocbreak();
 echo();
 delwin(ball);
 curs_set(TRUE);   
 clear(); 
 endwin(); // Restore normal terminal behavior
}
