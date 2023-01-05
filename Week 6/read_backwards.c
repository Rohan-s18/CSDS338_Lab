#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    int fd;
    char buffer[1024];

    fd = open("textfile.txt", O_RDONLY);
    //go to last char in file 
    int fptr = lseek(fd, (off_t)-1, SEEK_END); 

    while (fptr > 0) {
        read(fd, buffer, 1);
        write(1, buffer, 1);
        fptr = lseek(fd, (off_t)-2, SEEK_CUR);
    }

    return 0;
}