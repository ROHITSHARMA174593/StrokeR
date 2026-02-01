#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    // Your code here

	int n = nums.size();


	int start = 0, end = n-1;
	int index = n;

	while(start<=end){


		int mid = start +(end-start)/2;

		if(nums[mid]==target){
			return mid;
		}
		else if(nums[mid]<target){
			start = mid+1;
		}
		else{
			index = mid;
			end = mid-1;
		}
	}

     
	 return index;


}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << "Array: "; for(int x:nums) cout<<x<<" "; cout<<endl;
    cout << "Target: " << target << " -> Insert Index: " << searchInsert(nums, target) << endl;
    
    target = 2;
    cout << "Target: " << target << " -> Insert Index: " << searchInsert(nums, target) << endl;
    return 0;
}