/*
https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector <int> v;
    char ch = ',';
    int a;
    ss >> a;
    v.push_back(a);
    while (ss >> ch) {
        ss >> a;
        v.push_back(a);
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

