#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string sortVowels(string &s) {
        //Code here
        string vowels;
        for(char c : s) {
            if(isVowel(c)) vowels.push_back(c);
        }
        sort(vowels.begin(), vowels.end());
        
        string ans = s;
        int vIdx = 0;
        for(int i=0; i<ans.size(); i++) {
            if(isVowel(ans[i])) {
                ans[i] = vowels[vIdx++];
            }
        }
        return ans;
    }
    
    bool isVowel(char c) {
        return string("aeiouAEIOU").find(c) != string::npos;
    }
};

int main() {
    Solution s;
    string str = "lEetcOde";
    cout << "Original: " << str << endl;
    cout << "Sorted Vowels: " << s.sortVowels(str) << endl; 
    return 0;
}


// Homework
