// Link: https://strikes.in/practice/68ac0c51b68bc4c304e47837
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    
	int n = arr.size();

	for(int i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}

}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for(int num : arr) cout << num << " ";
    cout << endl;
    
    reverseArray(arr);
    
    cout << "Reversed Array: ";
    for(int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}