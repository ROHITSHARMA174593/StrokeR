#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        //code here

        //                 mid
		// 10, 20, 30, 40, 50 ,60, 70, 1, 2 , 3
		//                     left           right

		int n = nums.size();
          
		//   array is already sorted
		if(nums[0]<=nums[n-1]){
			return nums[0];
		}  
		int left = 0, right = n-1;
		int minElement;

		while(left<=right){

			int mid = left+(right-left)/2;

			// left portion, move to right portion
			if(nums[mid]>=nums[0]){
              left = mid+1;
			}
			else{
                right = mid-1;
				minElement = nums[mid];
			}

			// right portion, move to left portion by storing the mid element
		}


		return minElement;
		
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << "Rotated Array: "; for(int i:nums) cout << i << " "; cout << endl;
    cout << "Minimum Element: " << s.findMin(nums) << endl;
    return 0;
}