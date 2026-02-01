#include <iostream>
#include <vector>
#include <algorithm> // for swap
using namespace std;

class Solution {
public:
  vector<int> selectionSort(vector<int>& arr) {
    // Write your code here
    
	int n = arr.size();

	// 1 task, smallest number hoga usko uski first position pe laana
	// 0 to n-1 traverse, smallest number 0 index pe laana
    // 1 to n-1 traverser, smallest number 1 index pe laana hai
	// 2 to n-2 traverse, smallest number 2 index pe laana hai

    for(int i=0;i<n;i++){

	int index = i;



	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[index]){
			index = j;
		}
	}



	swap(arr[index],arr[i]); 
	// just swap the number with first index of current

	}


	return arr;




  }
};

int main() {
    Solution s;
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original Array: ";
    for(int i : arr) cout << i << " ";
    cout << endl;

    vector<int> sortedArr = s.selectionSort(arr);

    cout << "Sorted Array:   ";
    for(int i : sortedArr) cout << i << " ";
    cout << endl;
    return 0;
}