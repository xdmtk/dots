#include <curses.h>
#include <zconf.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void build_x_logo();
void dissolve_logo();
void init_x_colors();
void circulate();

int main(int argc, char **argv) {
    initscr();
    start_color();
    init_x_colors();
    build_x_logo();
    endwin();
}


void init_x_colors() {
    int i;
    int colors[] = {COLOR_BLUE, COLOR_RED, COLOR_MAGENTA, COLOR_GREEN, COLOR_CYAN, COLOR_YELLOW, COLOR_WHITE};
    for (i = 0; i < 7; i++)
        init_pair(i, colors[i], colors[i]);
    for (i = 7; i < 16; i++)
        init_pair(i, colors[rand() % 7], colors[rand() % 7]);
}

void build_x_logo() {
    int max_x, max_y, bar_len, i, j, r, color_c = 1;

    getmaxyx(stdscr, max_y, max_x);
    for (j=0; j < max_y; ++j) {
        attron(COLOR_PAIR(color_c));

        for (i=0; i < max_x; ++i) {
            mvaddch(j,i,ACS_BLOCK);
        }

        attroff(COLOR_PAIR(color_c++));
        color_c = color_c > 6 ? 1 : color_c;
    }
    refresh();
    init_pair(46, COLOR_BLACK, COLOR_BLACK);
    attron(COLOR_PAIR(46));
    for (i=0; i < max_x+1; ++i) { 
        for (j=0; j < max_y; ++j) {
            if (j % 2)
                mvaddch(j,i, ACS_BLOCK);
            else
                mvaddch(j,max_x-i, ACS_BLOCK);
        }
        refresh();
        usleep(800000/max_x);
    }
    refresh();


}
