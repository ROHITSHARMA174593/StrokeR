#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:

//    [1]
// num = 5
//  carry = 0;
    vector<int> factorial(int num) {
        // code here


		vector<int>ans(1,1);
		// [1]

		while(num>1){
         
		 int carry = 0;

		 for(int i=0;i<ans.size();i++){
			int sum = num*ans[i]+carry;
			ans[i] = sum%10;
			carry= sum/10;
		 }


		 while(carry){
			ans.push_back(carry%10);
			carry/=10;
		 }

		 num--;

		}
        
		reverse(ans.begin(),ans.end());

		return ans;
    }
};

int main() {
    Solution s;
    int num = 100; // Small example
    vector<int> res = s.factorial(num);
    cout << "Factorial of " << num << ": ";
    for(int digit : res) cout << digit;
    cout << endl;
    return 0;
}