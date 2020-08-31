/*
https://www.hackerrank.com/challenges/operator-overloading/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {    
    public:
        vector <vector <int>> a;
        Matrix operator + (Matrix m) {
            Matrix c = m;
            for (int i = 0; i < a.size(); i++) {
                for (int j = 0; j < a[i].size(); j++) {
                    c.a[i][j] = a[i][j] + m.a[i][j];
                } 
            }
            return c;
        }
};

int main () {
