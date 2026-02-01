#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    // Your code here

	int n = nums.size();

	int start = 0, end = n-1;
    

	// find the first occuracne of the target

	int index1 = -1;
	while(start<=end){
      
	  int mid = start+(end-start)/2;

	 if(nums[mid]==target){
		index1 = mid;
		end = mid-1;
	 }
	 else if(nums[mid]<target){
		// right side
		start = mid+1;
	 }
	 else{
		end = mid-1;
	 }
	}


	int index2 = -1;
	start =0, end = n-1;

	while(start<=end){
      
	  int mid = start+(end-start)/2;

	 if(nums[mid]==target){
		index2 = mid;
		start = mid+1;
	 }
	 else if(nums[mid]<target){
		// right side
		start = mid+1;
	 }
	 else{
		end = mid-1;
	 }
	}


	vector<int>ans;
	ans.push_back(index1);
	ans.push_back(index2);

	return ans;
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    cout << "Array: ";
    for(int i : nums) cout << i << " ";
    cout << endl;
    cout << "Target: " << target << endl;
    
    vector<int> result = searchRange(nums, target);
    cout << "Range: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}