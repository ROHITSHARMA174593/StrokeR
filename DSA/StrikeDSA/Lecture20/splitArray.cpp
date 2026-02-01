#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canSplit(vector<int>& nums) {
        //code here

		int Totalsum = 0, n= nums.size();
		for(int i=0;i<n;i++){
			Totalsum+=nums[i];
		}

		if(Totalsum%2){
			return false;
		}


		int target = Totalsum/2;

		int prefixSum = 0;

		for(int i=0;i<n-1;i++){
			prefixSum+=nums[i];
			if(prefixSum==target)
			return true;
		}


		return false;



    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 5};
    cout << "Array: "; for(int i:nums) cout << i << " "; cout << endl;
    cout << "Can split into two equal sum subarrays? " << (s.canSplit(nums)?"Yes":"No") << endl;
    return 0;
}