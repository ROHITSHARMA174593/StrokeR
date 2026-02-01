// Link: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    // Code Here
    
    // previous element > current element, return false
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    cout << "Array 1: ";
    for (int i=0; i<n1; i++) cout << arr1[i] << " ";
    cout << " -> Sorted: " << (isSorted(arr1, n1) ? "True" : "False") << endl;

    int arr2[] = {5, 4, 3, 2, 1};
    int n2 = 5;
    cout << "Array 2: ";
    for (int i=0; i<n2; i++) cout << arr2[i] << " ";
    cout << " -> Sorted: " << (isSorted(arr2, n2) ? "True" : "False") << endl;

    return 0;
}