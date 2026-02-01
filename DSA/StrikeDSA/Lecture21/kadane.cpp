#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    // Your code here
    

	int n = arr.size();
	int maxSum = INT_MIN, subSum = 0;

	for(int i=0;i<n;i++){
		// agar mujse pehle wale negative hue, mein nahi add hounga unke sath
        if(subSum<0){
			subSum = arr[i];
		}
		else{
			subSum+=arr[i];
		}

		maxSum = max(maxSum,subSum);

		// Nahi toh mein us group ka part pan jaaunga
	}

	return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Array: "; for(int i:arr) cout << i << " "; cout << endl;
    cout << "Max Subarray Sum (Kadane's): " << maxSubarraySum(arr) << endl;
    return 0;
}