#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxUniqueSubstring(string& s) {
       //code here
     
	 int start = 0, end = 0, n = s.size();
	 bool freq[256] = {0};
	 int answer = 0;

	 while(end<n){
       
	//    jis character pe mein hu, kya wo mere current window mein present
	// toh nahi hai, agar hai usko hatao
        
		while(freq[s[end]]){
			freq[s[start]]=0;
			start++;
		}

		freq[s[end]] = 1;
		end++;

		answer = max(answer, end-start);

	 }

	 return answer;
}

int main() {
    string s = "abcabcbb";
    cout << "String: " << s << endl;
    cout << "Longest Substring without repeating: " << maxUniqueSubstring(s) << endl;
    return 0;
}