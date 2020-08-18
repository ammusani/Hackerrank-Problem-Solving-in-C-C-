/*
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int s;
    scanf("%d", &s);

    int min = s;
    int minC = 0;
    int max = s;
    int maxC = 0;
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &s);
        
        if (s > max) {
            max = s;
            maxC++;
        }
        else if (min > s) {
            min = s;
            minC++;
        }
    }
    printf("%d %d\n", maxC, minC);
    return 0;
}
