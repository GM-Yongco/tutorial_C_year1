#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Started sleeping for 5 seconds...\n");
    sleep(5);
    printf("Wake up!\n");
    return 0;
}