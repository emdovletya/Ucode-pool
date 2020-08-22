#include "../inc/header.h"

static void quit(char **phrase) {
    for (int i = 0; i < PHRS; i++)
        free(phrase[i]);
    free(phrase);
    endwin();
    exit(1);
}

static char **get_phrases() {
    char **phrase = (char **)malloc(PHRS * sizeof(char *));

    phrase[0] = mx_strdup("Wake up, Neo...");
    phrase[1] = mx_strdup("The Matrix has you...");
    phrase[2] = mx_strdup("Follow the white rabbit.");
    phrase[3] = mx_strdup("Knock, knock, Neo.");
    phrase[4] = mx_strdup("You get used to it, I don't even see the code");
    phrase[5] = mx_strdup("All I see is a blond, brunette, redhead.");
    return phrase;
}

void intro_scene() {
    char **phrase = get_phrases();
    int HEIGHT, WIDTH;

    getmaxyx(stdscr, HEIGHT, WIDTH);
    attron(COLOR_PAIR(2));
    for (int i = 0; i < PHRS; i++) {
        move(HEIGHT / 6, WIDTH / 10);
        for (int j = 0; phrase[i][j]; j++) {
            addch(phrase[i][j] | A_DIM);
            timeout(80);
            switch (getch()) {
            case 'q':
                quit(phrase);
                break;
            case '\n':
                clear();
                return;
                break;
            }
        }
        for (int j = 0; j < 20; j++) {
            timeout(80);
            switch (getch()) {
            case 'q':
                quit(phrase);
                break;
            case '\n':
                clear();
                return;
                break;
            }
        }
        clear();
    }
}
