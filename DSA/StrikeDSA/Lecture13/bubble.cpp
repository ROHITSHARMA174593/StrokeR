#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<int> bubbleSort(vector<int>& arr) {
    // Write your code here

	int n = arr.size();
    
	for(int i=0;i<n-1;i++){
        
		bool swapped = false;

		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swapped = true;
				swap(arr[j],arr[j+1]);
			}
		}


		if(!swapped){
			return arr;
		}

	}


	return arr;


	

  }
};

int main() {
    Solution s;
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Unsorted array: \n";
    for (int i : arr) cout << i << " ";
    cout << endl;

    vector<int> sortedArr = s.bubbleSort(arr);

    cout << "Sorted array: \n";
    for (int i : sortedArr) cout << i << " ";
    cout << endl;
    return 0;
}