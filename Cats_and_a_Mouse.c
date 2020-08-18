/*
https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
*/

#include <stdio.h>

int main () {
    int q;
    int x;
    int y;
    int z;
    scanf("%d", &q);
    while (q--) {
        scanf("%d%d%d", &x, &y, &z);
        x -= z;
        if (x < 0) x *= -1;
        y -= z;
        if (y < 0) y *= -1;

        if(x > y) printf("%s", "Cat B\n");
        else if (x == y) printf("%s", "Mouse C\n");
        else printf("%s", "Cat A\n");
    }
    return 0;
}
