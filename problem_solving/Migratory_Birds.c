/*
https://www.hackerrank.com/challenges/migratory-birds/problem
*/

#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int arr[6] = {0};
    int a;
     
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &a);
        arr[a]++;
    }

    int max = 0;
    int maxD = 0;
    for (int i = 1; i < 6; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxD = i;
        }
    }
    printf("%d\n", maxD);
    return 0;
}
