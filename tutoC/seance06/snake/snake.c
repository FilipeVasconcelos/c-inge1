#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define W_BOARD 30
#define H_BOARD 30
#define SS 'O'

WINDOW* board;

int dirx,diry;
int keyInput;
int sx,sy;

int main() {
    
    sx=W_BOARD/2;
    sy=H_BOARD/2;
    dirx=0;diry=0;
    initscr(); // std screen
    clear(); 
    noecho();  // pas d'echo des touches pressées
    cbreak();  // inteprète les touches
    curs_set(FALSE);    

    board=newwin(H_BOARD,W_BOARD,0,1);
    mvwaddch(board,sy,sx,SS);
    keypad(board,TRUE);
    mvprintw(LINES-1,0,"Press q to quit");
    refresh(); 
    while (1) {
        keyInput = wgetch(board);
        if (keyInput == KEY_LEFT){
                dirx=-1;
                diry=0;
        } else if (keyInput == KEY_RIGHT) {
                dirx=1;
                diry=0;
        } else if (keyInput == KEY_UP) {
                dirx=0;
                diry=-1;
        } else if (keyInput == KEY_DOWN) {
                dirx=0;
                diry=1;
        } else if (keyInput == 'q') {
                break;
        }
        mvwaddch(board,sy,sx,SS);
        sx+=dirx;
        sy+=diry;
        
    } 
    nocbreak();
    echo();
    curs_set(TRUE);   
    clear(); 
    endwin(); // Restore normal terminal behavior
    
    return EXIT_SUCCESS;
}
