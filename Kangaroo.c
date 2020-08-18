/*
https://www.hackerrank.com/challenges/kangaroo/problem
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x1;
    int x2;
    int v1;
    int v2;

    scanf("%d%d%d%d", &x1, &v1, &x2, &v2);

    float m = (float)(x1 - x2) / (v2 - v1);

    if (m < 0) printf("%s", "NO\n");
    else {
        int n = floor(m);
        int o = ceil(m);
        if(n - o == 0) printf("%s", "YES\n");
        else printf("%s", "NO\n");
    }

    return 0;
}
