/*
https://www.hackerrank.com/challenges/sock-merchant/problem
*/

#include <stdio.h>

int main () {
    int n;
    int arr[101] = {0};
    int a;
    int count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        arr[a]++;
    }
    for (int i = 1; i < 101; i++) {
        count += (arr[i] % 2);
    }
    printf("%d\n", (n - count) / 2);
    return 0;
}
