/*
https://www.hackerrank.com/challenges/diagonal-difference/problem
*/

// Solution in C:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = 0;
    int c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &c);
            if(i == j) a += c;
            if(j == n - i - 1) b += c;
        }
    }
    printf("%d\n", abs(a - b));
    return 0;
}
