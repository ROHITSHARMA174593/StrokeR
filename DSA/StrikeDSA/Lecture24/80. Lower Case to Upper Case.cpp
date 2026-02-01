#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toUpper(string &str) {
    // Your code here

	for(int i=0;i<str.size();i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i] =  str[i]-32;
		}
	}

	return str;
}

int main() {
    string s = "hello";
    cout << "Original: " << s << endl;
    cout << "Upper: " << toUpper(s) << endl;
    return 0;
}

	return str;
}