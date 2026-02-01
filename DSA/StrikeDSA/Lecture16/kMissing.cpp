#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    // Your code here

	int missingNumber = k;

	for(int i=0;i<arr.size();i++){

		if(arr[i]>missingNumber){
			return missingNumber;
		}
		else{
			missingNumber++;
		}
	}


	return missingNumber;
}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "Array: "; for(int i:arr) cout << i << " "; cout << endl;
    cout << k << "th Missing Positive: " << findKthPositive(arr, k) << endl;
    return 0;
}