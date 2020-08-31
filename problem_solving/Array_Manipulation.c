/*
https://www.hackerrank.com/challenges/crush/problem
*/

#include <stdio.h>
#include <stdlib.h>


// What we learned here? Always when declairing large arrays use, malloc! Not array declaration, else c throws out error!!!
int main () {
    long int n;
    long int m;
    scanf("%ld %ld", &n, &m);
    long int *ar = (long int*) malloc((n + 1) * sizeof(long int));
    for (int i = 0; i <= n; i++) ar[i] = 0;
    long int a;
    long int b;
    long int k;
    while (m--) {
        scanf("%ld %ld %ld", &a, &b, &k);
        ar[a] += k;
        if(b + 1 <= n) ar[b + 1] -= k;
    }
    long int max = ar[0];
    for (int i = 1; i <= n; i++) {
        ar[i] += ar[i - 1];
        if (max < ar[i]) max = ar[i];
    }
    printf("%ld\n", max);
    return 0;
}

