#include <stdio.h>
#include <unistd.h>

int main() {
    int hrs, mins, secs;
    for(hrs = 0; hrs < 24; hrs++) {
        for(mins = 0; mins < 60; mins++) {
            for(secs = 0; secs < 60; secs++) {
                printf("\033[2J");
                printf("\033[12;30H");
                printf("\r\t\t\t%02d:%02d:%02d", hrs, mins, secs);
                fflush(stdout);
                sleep(1);
            }
        }
    }
    return 0;
}