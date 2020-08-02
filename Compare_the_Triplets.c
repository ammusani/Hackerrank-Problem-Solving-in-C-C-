/*
https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/

// Solution in C:

#include <stdio.h>

int main() {
    int a[3];
    int b[3];
    int c = 0;
    int d = 0;
    int i;
    for (i = 0; i < 3; i++) scanf("%d", &a[i]);
    for (i = 0; i < 3; i++) scanf("%d", &b[i]);
    for (i = 0; i < 3; i++) {
        if(a[i] > b[i]) c++;
        else if (a[i] < b[i]) d++; 
    }
    printf("%d %d\n", c, d);
    return 0;
}
