#include <iostream>
#include <string>
#include <vector>
using namespace std;

string sortString(string &s) {
    // Code here

	int count[26] = {0};
	int n = s.size();

	for(int i=0;i<n;i++){
		count[s[i]-'a']++;
	}


	// sort karna hai
	string ans;

	for(int i=0;i<26;i++){
        char c = 'a'+i;
		while(count[i]){
           ans.push_back(c);
		   count[i]--;
		}
	}

	return ans;
}

int main() {
    string s = "edcba";
    cout << "Original: " << s << endl;
    cout << "Sorted: " << sortString(s) << endl;
    return 0;
}