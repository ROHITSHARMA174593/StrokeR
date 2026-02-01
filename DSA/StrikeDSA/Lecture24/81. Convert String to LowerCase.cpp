#include <iostream>
#include <string>
using namespace std;

string toLower(string &s) {
    // Your code here

	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			// small mein convert karna hai
			s[i] =  'a' + (s[i]-'A');
		}
	}

	return s;
}

int main() {
    string s = "HELLO";
    cout << "Original: " << s << endl;
    cout << "Lower: " << toLower(s) << endl;
    return 0;
}