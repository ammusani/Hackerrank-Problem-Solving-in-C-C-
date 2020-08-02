/*
https://www.hackerrank.com/challenges/plus-minus/problem
*/

// Solution in C:

#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    int pos = 0;
    int neg = 0;
    int s;
    for(int i = 0; i < n; i++) {
        scanf("%d", &s);
        if(s > 0) pos++;
        else if(s < 0) neg++;
    }
    printf("%f\n", (float)pos / n);
    printf("%f\n", (float)neg / n);
    printf("%f\n", (float)(n - pos - neg) / n);
    return 0;
}
