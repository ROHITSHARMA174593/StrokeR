#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr, int left,int right) {

	int maxSum = arr[left], prefixSum = arr[left];
    
	for(int i=left+1;i<=right;i++){
		prefixSum +=arr[i];
		maxSum = max(prefixSum,maxSum);
	}

	return maxSum;
}



vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
    // Your code here
    
	int querySize = leftIndex.size();
	vector<int>ans;

	for(int i=0;i<querySize;i++){
      
	  int prefixSum = maxSubarraySum(arr,leftIndex[i],rightIndex[i]);
	  ans.push_back(prefixSum);
	}

	return ans;
	
}

int main() {
    vector<int> arr = {1, 2, -1, 4, 5};
    vector<int> left = {0, 1};
    vector<int> right = {3, 4};
    cout << "Array: "; for(int i:arr) cout<<i<<" "; cout<<endl;
    vector<int> res = maxPrefixes(arr, left, right);
    cout << "Max Prefixes: "; for(int i:res) cout<<i<<" "; cout<<endl;
    return 0;
}



vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
    // Your code here
    
	int querySize = leftIndex.size();
	vector<int>ans;

	for(int i=0;i<querySize;i++){
      
	  int prefixSum = maxSubarraySum(arr,leftIndex[i],rightIndex[i]);
	  ans.push_back(prefixSum);
	}

	return ans;
	
}