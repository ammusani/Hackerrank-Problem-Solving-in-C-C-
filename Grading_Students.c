/*
https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
*/

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int a;
    int b;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a >= 38) {
            b = a / 5;
            b++;
            b *= 5;
            if (b - a < 3) a = b;
        }
        printf("%d\n", a);
    }
    return 0;
}

