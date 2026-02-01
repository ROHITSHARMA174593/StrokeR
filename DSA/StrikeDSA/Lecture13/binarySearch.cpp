#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Write your code here


		int n = nums.size();

		int start = 0, end = n-1;

        while(start<=end){

			int mid = (start+end)/2;
			// int mid = start+(end-start)/2 (correct)
			// int mid = end+(start-end)/2 (incorrect)
			// first we have find the middle index

			if(nums[mid]==target){
				return mid;
			}
			else if(nums[mid]<target){
				// right side
				start = mid+1;
			}
			else{
				// left side
				end = mid-1;
			}

		}


		return -1;




    }
};

int main() {
    Solution s;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << "Array: ";
    for(int i : nums) cout << i << " ";
    cout << endl;
    
    cout << "Target: " << target << endl;
    cout << "Index: " << s.search(nums, target) << endl;
    return 0;
}