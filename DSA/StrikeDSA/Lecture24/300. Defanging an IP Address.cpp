#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        //Code here

		string ans;

		for(int i=0;i<address.size();i++){
			if(address[i]=='.'){
				ans = ans+"[.]";
			}
			else{
				ans.push_back(address[i]);
			}
		}

		return ans;
    }


};

int main() {
    Solution s;
    string address = "1.1.1.1";
    cout << "IP: " << address << endl;
    cout << "Defanged: " << s.defangIPaddr(address) << endl;
    return 0;
}
