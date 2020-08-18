/*
https://www.hackerrank.com/challenges/counting-valleys/problem
*/

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int alt = 0;
    char a;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%c", &a);
        if (a == 'D') {
            alt--;
            if(alt == 0) count++;
        }
        else alt++;
    }
    printf("%d\n", count);
    return 0;
}
