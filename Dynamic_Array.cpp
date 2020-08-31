/*
https://www.hackerrank.com/challenges/dynamic-array/problem?isFullScreen=true
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int q;
    scanf("%d%d", &n, &q);
    
    vector <vector<int>> s;
    vector <int> v;
    
    for (int i = 0; i < n; i++) s.push_back(v);
    
    int a;
    int x;
    int y;
    int lastA = 0;
    
    //cout << n << " " << q << endl;
    
    for (int i = 0; i < q; i++) {
        scanf ("%d%d%d", &a, &x, &y);
        int ind = (x ^ lastA) % n;
        
        //cout << a << " " << x << " " << y << " " << ind << endl;
        if (a == 1) {
            s[ind].push_back(y);
        }
        else {
            int siz = s[ind].size();
            lastA = s[ind][y % siz];
            printf("%d\n", lastA);
        }
    }
    return 0;
}
