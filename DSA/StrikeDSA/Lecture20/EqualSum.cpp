#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
  public:
    vector<int> EqualSum(vector<int> arr) {
        //Code here

		int sum = 0, n = arr.size();
        
		// sum of all element in array
		for(int i=0;i<n;i++){
			sum+=arr[i];
		}

		int leftSum =0, rightSum;
        
		// 0: Real value, 1: Index of the element, 2: LeftSubbary(1) or Right Subbarray(2)
		vector<int>ans(3);
		ans[0] = INT_MAX;

		for(int i=0;i<n-1;i++){
           leftSum+=arr[i];
		   rightSum = sum-leftSum;
           
		   if(abs(leftSum-rightSum)>ans[0])
		   continue;


		   if(rightSum>leftSum){
			ans[2] = 1;
			ans[0] = rightSum-leftSum;
			ans[1] = i+2;
		   }
		   else{
			ans[2] = 2;
			ans[0] = leftSum-rightSum;
			ans[1] = i+2;
		   }
		   
		}


		return ans; 
    }
};

int main() {
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5, 5};
    vector<int> res = s.EqualSum(arr);
    cout << "Array: "; for(int i:arr) cout << i << " "; cout << endl;
    cout << "Min Diff: " << res[0] << ", Index: " << res[1] << ", Part: " << res[2] << endl;
    return 0;
}