#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string &s) {
    // Your code here
    int start = 0, end = s.size()-1;
    while(start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

int main() {
    string s = "hello";
    cout << "Original: " << s << endl;
    cout << "Reversed: " << reverseString(s) << endl;
    return 0;
}