#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<int> insertionSort(vector<int>& arr) {
    // Write your code here

	int n = arr.size();
    
	for(int i=1;i<n;i++){
     
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
			else{
				break;
			}


			// code


		}
    
	}

	//  worst case

	// i=1, j = 1 operation
	// i =2, j= 2 operation
	// i = 3, j= 3 operation
	//  i = n-1, j = n-1 operation

//    best case

	// i=1, j = 1 operation
	// i =2, j= 1 operation
	// i = 3, j= 1 operation
	//  i = n-1, j = 1 operation


	return arr;


	

  }
};

int main() {
    Solution s;
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Unsorted array: \n";
    for (int i : arr) cout << i << " ";
    cout << endl;

    vector<int> sortedArr = s.insertionSort(arr);

    cout << "Sorted array: \n";
    for (int i : sortedArr) cout << i << " ";
    cout << endl;
    return 0;
}