// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        //  find the largest element
        
        int largest = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        
        int second_largest = -1;
        
        for(int i=0;i<n;i++){
            if(arr[i]==largest){
                continue;
            }
            else if(arr[i]>second_largest){
                second_largest = arr[i];
            }
        }
        
        return second_largest;
        
    }
};

int main() {
    Solution s;
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Array: ";
    for(int i : arr) cout << i << " ";
    cout << endl;
    
    cout << "Second Largest: " << s.getSecondLargest(arr) << endl;
    return 0;
}