#include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestPalindrome(string s) {
         
	  vector<int>freq(256,0);

	  for(int i=0;i<s.size();i++){
		freq[s[i]]++;
	  }


	  int ans = 0;
	  bool odd = 0;

	  for(int i=0;i<256;i++){
		if(freq[i]%2){
			ans+= freq[i]-1;
			odd = true;
		}
		else{
			ans+=freq[i];
		}
	  }

	  if(odd){
		ans++;
	  }

	  return ans;
}

int main() {
    string s = "abccccdd";
    cout << "String: " << s << endl;
    cout << "Longest Palindrome Length: " << longestPalindrome(s) << endl;
    return 0;
}