/*
https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <stdio.h>

int gcd(int a, int b) {
    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b; 
    }
    if (b == 0) return a;
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    int m;
    scanf("%d%d", &n, &m);
    int a;
    int b;
    
    // Finding lcm on a
    int lcm1 = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        lcm1 = lcm(a, lcm1);
        //printf("%d\n", lcm1);
    }
    
    // Finfing gcd on b
    scanf("%d", &b);
    int gcd1 = b;
    for (int i = 1; i < m; i++) {
        scanf("%d", &b);
        gcd1 = gcd(b, gcd1);
    }

    // Count
    int count = 0;
    int lcm2 = lcm1;
    while (lcm2 <= gcd1) {
        if (gcd1 % lcm2 == 0) count++;
        lcm2 += lcm1; 
    }

    printf("%d\n", count);
    return 0;
}

