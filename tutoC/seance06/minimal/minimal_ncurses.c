#include<curses.h>
int main(void)
{
    int a=65;
    initscr();			/* Start curses mode */
    raw();
    noecho();
    mvprintw(LINES-1,COLS-10,"by filipe");
    /*printw("Hello World !!!");	// Print Hello World
    refresh();			// Print it on to the real screen 
    while (getch() !='q') 
    {
        printw("%c",a);
        a++;
        if (!a%91) 
        {
            a=65;
        }

    };	*/		// Wait for user input 
    getch();
    endwin();                   // End curses mode 
    return 0;
}
