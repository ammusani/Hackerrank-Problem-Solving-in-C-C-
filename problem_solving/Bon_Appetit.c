/*
https://www.hackerrank.com/challenges/bon-appetit/problem
*/

#include <stdio.h>

int main () {
    int n;
    int k;
    scanf("%d%d", &n, &k);

    int a;
    int bill = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (i == k) continue;
        bill += a;
    }

    int b;
    scanf("%d", &b);
    int l = (b * 2 - bill) / 2;
    if(l) printf("%d\n", l);
    else printf("Bon Appetit\n");
    return 0;
}
