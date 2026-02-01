#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string& s) {
    // Your code here

	int start = 0, end = s.size()-1;

	while(start<end){
		if(s[start]!=s[end]){
			return false;
		}

		start++, end--;
	}


	return true;
}

int main() {
    string s = "radar";
    cout << "String: " << s << endl;
    cout << "Is Palindrome? " << (isPalindrome(s)?"Yes":"No") << endl;
    return 0;
}