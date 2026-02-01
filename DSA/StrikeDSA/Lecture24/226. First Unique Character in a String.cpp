#include <iostream>
#include <string>
#include <vector>
using namespace std;

int firstUniqChar(string& s) {
    
	int n = s.size();
	int count[26] = {0};

	for(int i=0;i<n;i++){
		count[s[i]-'a']++;
	}


	for(int i=0;i<n;i++){
		if(count[s[i]-'a']==1){
			return i;
		}
	}

	return -1;

}

int main() {
    string s = "leetcode";
    cout << "String: " << s << endl;
    cout << "First Unique Char Index: " << firstUniqChar(s) << endl;
    return 0;
}