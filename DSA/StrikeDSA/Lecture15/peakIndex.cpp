#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    // Your code here

	int start = 0, end = arr.size()-1;


	while(start<=end){

		int mid = end+(start-end)/2;

		// answer find, peak element conidtion
		if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
			return mid;
		}
		// Increasing order array
		else if(arr[mid]>arr[mid-1]){
			start = mid+1;
			// Right side 
		}
		// Decreasing Order array
		else{
			end = mid-1;
			// left side mein milega
		}
	}
    

	return -1;
	
}

int main() {
    vector<int> arr = {0, 10, 5, 2};
    cout << "Mountain Array: ";
    for(int i:arr) cout << i << " ";
    cout << endl;
    cout << "Peak Index: " << peakIndexInMountainArray(arr) << endl;
    return 0;
}