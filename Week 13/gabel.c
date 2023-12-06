// Author: Rohan Singh
// Gabel is german for fork heheh
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

pid_t pid;
int duration = 5;

// Main Function
int main() {

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        fprintf(stdout,"Child process (PID: %d) sleeping for %d seconds\n", getpid(), duration);
        sleep(duration);
    } else {
        fprintf(stdout,"Parent process (PID: %d) sleeping for %d seconds\n", getpid(), duration);
        sleep(duration);
    }

    return 0;
}
