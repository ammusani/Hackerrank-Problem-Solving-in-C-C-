/*
https://www.hackerrank.com/challenges/mini-max-sum/problem
*/

// Solution in C:

#include <stdio.h>

int main () {
    int arr[5] = {0};
    long k;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &k);
        //arr[i] = k;
        int j = i - 1;                      // Using insertion sort, since data is very limited.
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
    k = 0;
    for(int i = 0; i < 4; i++) k += arr[i];
    printf("%ld ", k);
    k = 0;
    for(int i = 1; i < 5; i++) k += arr[i];
    printf("%ld\n", k);
    return 0;
}
