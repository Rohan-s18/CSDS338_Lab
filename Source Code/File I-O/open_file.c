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
    int count;

    //Change the filepath to some other file
    char *filepath = "/Users/rohansingh/github_repos/CSDS338_Lab/README.md";

    //Getting the file descriptor/handle
    fd = open(filepath, O_RDWR);
    if(fd < 0) {
        /* the file couldn't be opened */
        perror("File couldn't be opened");
        exit(1);
    }

    //Getting the file contents and storing it into a buffer
    count = read(fd, buffer, 1024);
    if(count < 0) { 
        /* the read failed */
        perror("File Read Failed");
        exit(1);
    }   

    fprintf(stdout,"The File Handle is: %d\n\n\n",fd);
    fprintf(stdout,"The Buffer contains the first 1024 bytes which are: %s\n",buffer);



}