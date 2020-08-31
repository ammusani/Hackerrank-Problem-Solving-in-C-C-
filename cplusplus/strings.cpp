/*
https://www.hackerrank.com/challenges/c-tutorial-strings/problem
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    cout << s1.size() << " " << s2.size() << endl;
    cout << s1 + s2 << endl;
    s1[0] += s2[0];
    s2[0] = s1[0] - s2[0];
    s1[0] = s1[0] - s2[0];
    cout << s1 + " " + s2 << endl;
    return 0;
}
