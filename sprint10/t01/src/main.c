#include "copy.h"

int main(int argc, char *argv[]) {
    int f1 = 0;
    int f2 = 0;
    char buff;

    if (argc == 3) {
        f1 = open(argv[1], O_RDONLY);
        f2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
        if(f1 == -1)
        {
            mx_printerr("mx_cp");
            mx_printerr(argv[1]);
            mx_printerr(": ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
        }
        while(read(f1, &buff, 1)) {
            write(f2, &buff, 1);
        }
     }
     else 
     {
         mx_printerr("usage: ./mx_cp [source_file] [target_file]\n");
     }
     close(f1);
     close(f2);
     return 0;
}     
