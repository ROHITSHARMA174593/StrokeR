#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPaintingPossible(int maxPaint,vector<int> &arr, int k){

    int n = arr.size(); // Defined n
	int count = 1, paint = arr[0];

	for(int i=1;i<n;i++){
		paint+=arr[i];
		if(paint>maxPaint){
			count++;
			paint = arr[i];
		}
	}

	return count <= k;
}


int minTime(vector<int> &arr, int k) {
    // Your code here

	int n = arr.size();

	long long start = 0, end = 0;
    int mid, ans;

	for(int i=0;i<n;i++){
        if(arr[i] > start) start = arr[i]; // max
		end +=arr[i];
	}


	while(start<=end){
		mid = start+(end-start)/2;

		if(isPaintingPossible(mid,arr,k)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}


	return ans;
}

int main() {
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;
    cout << "Boards: "; for(int i:arr) cout<<i<<" "; cout<<endl;
    cout << "Min Time: " << minTime(arr, k) << endl;
    return 0;
}


int minTime(vector<int> &arr, int k) {
    // Your code here

	int n = arr.size();

	int start = 0, end = 0 , mid, ans;

	for(int i=0;i<n;i++){
		start = max(start,arr[i]);
		end +=arr[i];
	}


	while(start<=end){
		mid = start+(end-start)/2;

		if(isPaintingPossible(mid,arr,k)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}


	return ans;
}