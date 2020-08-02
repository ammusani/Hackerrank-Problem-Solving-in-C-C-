/*
https://www.hackerrank.com/challenges/simple-array-sum/problem
*/

// Solution in C:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d\n", sum);
}
