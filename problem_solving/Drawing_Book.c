/*
https://www.hackerrank.com/challenges/drawing-book/problem
*/

#include <stdio.h>

int main () {
    int n;
    int p;

    scanf("%d%d", &n, &p);

    int front = p / 2;
    int back;
    if(n % 2) back = (n - p) / 2;
    else back = (n + 1 - p) / 2;

    if(front > back) front = back;

    printf("%d\n", front);
    return 0;
}
