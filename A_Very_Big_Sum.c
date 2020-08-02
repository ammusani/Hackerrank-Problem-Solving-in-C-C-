/*
https://www.hackerrank.com/challenges/a-very-big-sum/problem
*/

// Solution in C:

#include <stdio.h>

int main() {
    int n;
    long a;
    long sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%ld", &a);
        sum += a;
    }
    printf("%ld\n", sum);
    return 0;
}
