/*
https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true
*/

#include <stdio.h>

int main () {
    int y;
    scanf("%d", &y);

    if (y < 1918) {
        if (!(y % 4)) printf("12");
        else printf("13");
    }
    else if (y == 1918) {
        printf("26");
    }
    else if (!(y % 4)) {
        if (!(y % 100)) {
            if (!(y % 400)) printf("12");
            else printf("13");
        }
        else printf("12");
    }
    else printf("13");
    printf(".09.%d\n", y);
    return 0;
}
