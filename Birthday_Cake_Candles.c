/*
https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
*/

#include <stdio.h>

int main () {
    int n;
    scanf ("%d", &n);

    int max = 0;				// Setting Max Value & Max Value occurence to zero
    int maxC = 0;
    int l;

    for (int i = 0; i < n; i++) {
        scanf ("%d", &l);
        
        if (l == max) maxC++;
        else if (l > max) {			// If l == max, increase occurence else if greater, store the new max and reset count to 1.
            max = l;
            maxC = 1;
        }
    }
    printf ("%d\n", maxC);
    return 0;
}
