#include "../inc/header.h"

void mx_lee(int W, int H, int **map, int ax, int ay, int bx, int by) {
    int px[W * H], py[W * H]; 
    int len = W;   
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int d, x, y, k , n, flag = 0, count;
    int maze[H][W];
    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            maze[i][j] = map[i][j];
    bool stop = false;
    if (map[ay][ax] == -1 || map[by][bx] == -1) 
        return;
    d = 0;
    map[ay][ax] = 0;
    while (!stop) {
        stop = true;              
        for ( y = 0; y < H; ++y )
            for ( x = 0; x < W; ++x )
                if ( map[y][x] == d ) {
                    for ( k = 0; k < 4; ++k ) {
                        int iy=y + dy[k], ix = x + dx[k];
                        if ( iy >= 0 && iy < H && ix >= 0 && ix < W && map[iy][ix] == -2) {
                            stop = false;
                            map[iy][ix] = d + 1;
                        }
                        else if (iy == by && ix == bx)
                            map[by][bx] = d - 1;
                    }
                }
        d++;
    }
    len = map[by][bx] + 1;
    x = bx;
    y = by;
    
    n = d - 1;
    d = len;
    while (d > 0) {
        px[d] = x;
        py[d] = y;
        d--;
        for (k = 0; k < 4; k++) {
            int iy = y + dy[k], ix = x + dx[k];
            if ( iy >= 0 && iy < H && ix >= 0 && ix < W && map[iy][ix] == d) {
                x = x + dx[k];
                y = y + dy[k];
                break;
            }
        }
    }
    px[0] = ax;
    py[0] = ay;
    count = map[by][bx];
    for (int i = 0; i < H; i++)
        for (int j =0; j < W;j++) {
            for (int jj = 0; jj <= len; jj++) {
                if (i == py[jj] && j == px[jj]) {
                    maze[i][j] = -9;
                    flag = 1;
                }
                if (i == py[jj] && j == px[jj] && map[i][j] == n)
                    maze[i][j] = -8;
            }
            if (!flag) {
                if (map[i][j] == n)
                    maze[i][j] = -5;
            }
            flag = 0;
        }
    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            map[i][j] = maze[i][j];
    if (map[by][bx] == -2) {
        mx_route_not_found();
        exit(1);
    }
    mx_printstr("dist = ");
    mx_printint(n);
    mx_printstr("\n");
    mx_printstr("exit = ");
    mx_printint(count);
    mx_printstr("\n");
}
