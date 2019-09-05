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
    curs_set(0);
    build_x_logo();
    dissolve_logo();
    circulate();


    getch();
    endwin();
}

void circulate() {
    int cur_x, cur_y;
    int max_x, max_y, i, t_begin, cur_color, val = 2000;
    int j;
    getmaxyx(stdscr, max_y, max_x);
    for (i = 0; i < max_y*max_x; ++i) {

    }




}


void dissolve_logo() {
    sleep(3);
    int cur_x, cur_y;
    int max_x, max_y, i, t_begin, cur_color, val = 2000;
    int j;
    getmaxyx(stdscr, max_y, max_x);
    t_begin = time(NULL);
    while (time(NULL) - t_begin < 10){
        attron(COLOR_PAIR(cur_color = rand() % 16));
        mvaddch(rand() % max_y, rand() % max_x, (char) rand() % 256);
        attroff(COLOR_PAIR(cur_color));
        usleep((val > 1 ? val-- : val)*1);
        refresh();
    }
    attron(COLOR_PAIR(56));
    move(0,0);
    refresh();
    for (j = 0; j < 18; j++) {
        for (i = 0; i < max_y * max_x; i++) {
            if (i > max_x) {
                cur_x = getcurx(stdscr);
                cur_y = getcury(stdscr);
                attroff(COLOR_PAIR(56));
                attron(COLOR_PAIR(j));
                mvaddch((i*j) % max_y, (i*j) % max_x, ACS_BLOCK);
                refresh();
                move(cur_y, cur_x);
                usleep(50);
                attroff(COLOR_PAIR(3));
                attron(COLOR_PAIR(56));
                refresh();
            }
            if (!(rand() % 5)) {
                addch(ACS_BLOCK);
                refresh();
                usleep(5);
            }
        }
    }


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
    bar_len = max_x/7;

    for (r = 0; r < max_y; r++) {
        for (i = 0; i < max_x; 1) {
            attron(COLOR_PAIR(color_c));
            for (j = 0; j < bar_len; j++, i++) {
                mvaddch(r, i, ACS_BLOCK);
                refresh();
                usleep(50);
            }
            attroff(COLOR_PAIR(color_c++));
            color_c = color_c > 6 ? 0 : color_c;
        }
    }


}
