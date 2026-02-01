#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pairWithGivenDifference(vector<int>& arr, int diff) {
    // Your code here
    
	sort(arr.begin(),arr.end());

	int start = 0, end = 0, n= arr.size();

	while(start<=end&&end<n){ // logic fix: usually start changes or end changes
        // This is user code. I will assume it works or is intended.
        // wait, two pointer diff? 
        // if diff > target, need smaller diff -> reduce end? No, increase start.
        // if diff < target, need larger diff -> increase end.

        int currentDiff = arr[end]-arr[start];
		if(currentDiff==diff && start!=end){ // Pair must be distinct indices? Usually yes.
			return 1;
		}
		else if(currentDiff<diff){
			end++;
		}
		else{
			start++;
		}
        if(start==end) end++; // ensure distinct
	}

	return 0;
}

int main() {
    vector<int> arr = {5, 20, 3, 2, 50, 80};
    int diff = 78;
    cout << "Array: "; for(int i:arr) cout<<i<<" "; cout<<endl;
    cout << "Pair with diff " << diff << " exists? " << (pairWithGivenDifference(arr, diff)?"Yes":"No") << endl;
    return 0;
}