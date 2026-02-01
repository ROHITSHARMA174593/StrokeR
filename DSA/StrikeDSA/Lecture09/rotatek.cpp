// Link: https://www.geeksforgeeks.org/problems/rotate-array-clockwise/1
#include <iostream>
#include <vector>
using namespace std;

class Solution1 {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
         while(k){

        int n = arr.size();
        
        // store the last number in temp variable
        int temp = arr[n-1];
        
        // n-2 to 0, shift them one position to right
        
        for(int i=n-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        
        // oindex wale pe temp wale ko daal do
        
        arr[0] = temp;
        k--;
        }

    }
};


// next solution

class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<int>nums(n);
        // created new array
        
        
        // now iterate over the arr (array)
        for(int i=0;i<n;i++){
            nums[(i+k)%n] = arr[i];
        }
        
        
        // copy new array into older array
        
        for(int i=0;i<n;i++){
            arr[i] = nums[i];
        }
        
        
        
    }
};


int main() {
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    cout << "Original: "; 
    for(int x: arr) cout << x << " "; 
    cout << endl;

    s.rotateclockwise(arr, k);

    cout << "Rotated by " << k << ": "; 
    for(int x: arr) cout << x << " "; 
    cout << endl;
    return 0;
}


