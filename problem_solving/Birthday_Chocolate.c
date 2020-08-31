/*
https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true
*/

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int s[n];
    for (int i = 0; i < n; i++) scanf("%d", &s[i]);

    int d;
    int m;
    scanf("%d%d", &d, &m);

    int sum = 0;
    int count = 0;
    if (m <= n) {
        for (int i = 0; i < m; i++) sum += s[i];
        if (d == sum) count++;
        
        for (int i = m, j = 0; i < n; i++, j++) {
            sum += s[i] - s[j];
            if (d == sum) count++;
        }
    }
    printf("%d\n", count);
}
