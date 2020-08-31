/*
https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true		
 */
 
 #include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) printf("%d ", a[n - i]);
    puts("");
    return 0;
}
