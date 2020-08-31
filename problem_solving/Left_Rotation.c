/*
https://www.hackerrank.com/challenges/array-left-rotation/problem
*/

#include <stdio.h>


int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n;
    int d;
    scanf("%d %d", &n, &d);
    d = d % n;
    int g = gcd(n, d);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < g; i++) {
        int temp = a[i];
        int j = i;
        int k;
        a[j] = a[(j + d) % n];
        while (1) {
            k = (j + d) % n;
            if (k == i) break;
            a[j] = a[k];
            j = k;
        }
        a[j] = temp;
    }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    puts(" ");
    return 0;
}

