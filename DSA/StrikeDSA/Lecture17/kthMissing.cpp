#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    // Your code here

	// int n = arr.size();

	// for(int i=0;i<n;i++){
      
	//   int totalMissing = arr[i] - (i+1);

	//   if(totalMissing>=k){
	// 	return i+k;
	//   }

	// }

    // return n+k;

    
	int start = 0, end = arr.size()-1;
	int ans = arr.size();

	while(start<=end){

		int mid = start+(end-start)/2;
        
		// right movement
		if(arr[mid]-(mid+1)<k){
			start = mid+1;
		}
		else{
			ans = mid;
			end = mid-1;
		}
		// left movement
	}

	return ans+k;


}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "Array: "; for(int i:arr) cout << i << " "; cout << endl;
    cout << k << "th Missing: " << findKthPositive(arr, k) << endl;
    return 0;
}