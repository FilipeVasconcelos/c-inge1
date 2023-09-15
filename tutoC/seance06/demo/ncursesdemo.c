#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
void printing();
void moving_and_sleeping();
void colouring();

//--------------------------------------------------------
// FUNCTION printing
//--------------------------------------------------------
void printing()
{
    addstr("This was printed using addstr\n\n");
    refresh();

    addstr("The following letter was printed using addch:- ");
    addch('a');
    refresh();

    printw("\n\nThese numbers were printed using printw\n%d\n%f\n", 123, 456.789);
    refresh();
}
//--------------------------------------------------------
// FUNCTION colouring
//--------------------------------------------------------
void colouring()
{
    if(has_colors())
    {
        if(start_color() == OK)
        {
            init_pair(1, COLOR_YELLOW, COLOR_RED);
            init_pair(2, COLOR_GREEN, COLOR_GREEN);
            init_pair(3, COLOR_MAGENTA, COLOR_CYAN);

            attrset(COLOR_PAIR(1));
            addstr("Yellow and red\n\n");
            refresh();
            attroff(COLOR_PAIR(1));

            attrset(COLOR_PAIR(2) | A_BOLD);
            addstr("Green and green A_BOLD\n\n");
            refresh();
            attroff(COLOR_PAIR(2));
            attroff(A_BOLD);

            attrset(COLOR_PAIR(3));
            addstr("Magenta and cyan\n");
            refresh();
            attroff(COLOR_PAIR(3));
        }
        else
        {
            addstr("Cannot start colours\n");
            refresh();
        }
    }
    else
    {
        addstr("Not colour capable\n");
        refresh();
    }
} 
//--------------------------------------------------------
// FUNCTION moving_and_sleeping
//--------------------------------------------------------
void moving_and_sleeping()
{
    int row = 14;
    int col = 0;
    //curs_set(0);

    if(has_colors()) {
        if(start_color() == OK)
        {
            init_pair(1, COLOR_BLACK, COLOR_WHITE);
            attrset(COLOR_PAIR(1));
            for(char c = 97; c <= 122; c++)
            {
                mvaddch(row++, col++, c);
                refresh();
                napms(100);
            }
            attroff(COLOR_PAIR(1));
        }
    }

    //curs_set(1);

    addch('\n');
}

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(void)
{
    initscr();
    addstr("-----------------\n| codedrome.com |\n| ncurses Demo  |\n-----------------\n\n");
    refresh();
    printing();
    moving_and_sleeping();
//colouring();
    addstr("\npress any key to exit...");
    refresh();
    getch();
    endwin();

    return EXIT_SUCCESS;
}
