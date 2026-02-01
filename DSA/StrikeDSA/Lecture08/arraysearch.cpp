// Link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
#include <iostream>
using namespace std;

// User function Template for C

int search(int arr[], int n, int x) {
    // Code here
    // linear search
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int x = 30;
    cout << "Array: ";
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    cout << "Searching for " << x << ": Found at index " << search(arr, n, x) << endl;
    return 0;
}