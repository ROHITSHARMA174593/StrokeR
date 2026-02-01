#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        //Code here

		vector<string>position(10);
		string word = " ";

		for(int i=0;i<s.size();i++){

			if(s[i]>='1'&&s[i]<='9'){
				int index = s[i]-'0';
				position[index] = word;
				word.clear();
			}
			else{
				word.push_back(s[i]);
			}
		}

		string ans;

		for(int i=1;i<position[1].size();i++){
			ans.push_back(position[1][i]);
		}

		

		for(int i=2;i<10;i++){
			if(position[i].size()==0){
				break;
			}
            
            // logic check: current code appends from position[2]. position[1] handled?
            // User code: position[1] appended char by char.
            // Then loop i=2..9 appending whole string.
            // Seems ok. Note: word initialized with " "?
            // line 7: string word = " ";
            // This means every word starts with space except the first?
            // Because first time `word` has " ".
            // Let's assume user code is correct logic-wise for the specific problem.

			ans+=position[i];
		}

		return ans;


    }
};

int main() {
    Solution s;
    string sentence = "is2 sentence4 This1 a3";
    cout << "Original: " << sentence << endl;
    cout << "Sorted: " << s.sortSentence(sentence) << endl;
    return 0;
}