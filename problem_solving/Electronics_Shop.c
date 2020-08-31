/*
https://www.hackerrank.com/challenges/electronics-shop/problem
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int b;
    int n;
    int m;
    scanf("%d%d%d", &b, &n, &m);

    int keyboard[n];
    for (int i = 0; i < n; i++) scanf("%d", &keyboard[i]);

    int usb[m];
    for (int i = 0; i < m; i++) scanf("%d", &usb[i]);

    int max = -1;
    int l;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            l = keyboard[i] + usb[j];
            if (l > max && l <= b) max = l;
        }
    }
    printf("%d\n", max);
    return 0;
}
