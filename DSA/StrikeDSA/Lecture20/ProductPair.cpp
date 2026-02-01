#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isProduct(vector<int>& arr, long long target) {
    // Your code here
    
	// mid: last index of negative number

	sort(arr.begin(),arr.end());

	int mid = -1, n = arr.size();

	for(int i=0;i<n;i++){
         
		 if(arr[i]<0){
			mid = i;
		 }
		 else{
			break;
		 }
	}


	if(target>=0){

		// Both number should lie in negative reigon
        int start = 0, end = mid;
        while(start<end){

			if((long long)arr[start]*arr[end]==target){
				return 1;
			}
			else if((long long)arr[start]*arr[end] < target){
				end--; // Wait, negative numbers logic?
                // If product < target (and target > 0), need larger product. 
                // Negative numbers: larger product means "more negative" or "closer to zero"?
                // -10 * -2 = 20. Target 30.
                // -10 * -3 = 30.
                // If product < target, need larger product.
                // If arr[start] * arr[end] (e.g. -10 * -2 = 20) < 30.
                // Need to go left or right?
                // Increasing magnitude of negative numbers -> larger positive product?
                // arr is sorted: -10, -5, -2.
                // arr[start] is most negative. arr[end] is least negative.
                // Product is positive.
                // To increase product, we need numbers with LARGER absolute values.
                // i.e., go left (decrease index) for start? Or decrease start?
                // Actually start=0 (most neg), end=mid (least neg).
                // If product < target. Need larger product.
                // Need LARGER absolute values. 
                // Currently start is max abs. end is min abs.
                // To increase product, replace end with something more negative (left of end).
                // So end--.
                // Logic check: -10 * -2 = 20. Target 30.
                // end-- -> -10 * -5 = 50 > 30.
                // So end-- increases product?
                // User code: end--. Correct.
                
                // Wait, user code says:
                /*
                else if(arr[start]*arr[end] < target){
				    end--;
			    }
			    else{
				    start++;
			    }
                */
                // If product > target (50 > 30). Increase start (move right -> less negative).
                // -5 * -10 = 50. start++ -> -2. -2 * -10... no, start is index.
                // arr = [-10, -5, -2].
                // start=0 (-10), end=2 (-2). Prod=20.
                // 20 < 30. end-- -> end=1 (-5).
                // start=0 (-10), end=1 (-5). Prod=50.
                // 50 > 30. start++ -> start=1 (-5). end=1. loop ends.
				end--;
			}
			else{
				start++;
			}
		}



		// BOth number should lie in positive reigon
		start = mid+1, end = n-1;

		while(start<end){

			if((long long)arr[start]*arr[end]==target){
				return 1;
			}
			else if((long long)arr[start]*arr[end] < target){
				start++;
			}
			else{
				end--;
			}
		}


	}
    else{

		// one number should lie in -ve reigon another in positive 

		int start = 0, end = mid+1;

		while(start<=mid&&end<n){

			if((long long)arr[start]*arr[end]==target){
				return true;
			}
			else if((long long)arr[start]*arr[end]>target){
				end++; // Logic check: target is negative. e.g. -50.
                // prod = -20. -20 > -50.
                // Need smaller product (more negative).
                // arr[start] is negative. arr[end] is positive.
                // -10 * 2 = -20. Target -50.
                // Need -50. Need larger magnitude negative.
                // Increase positive factor -> end++.
                // -10 * 5 = -50. Yes.
                // So if prod > target, end++. Correct.
				end++;
			}
			else{
				start++;
			}
		}
	}


	return false;


} 

int main() {
    vector<int> arr = {5, 7, -9, 3, -10, 2};
    long long target = -20;
    cout << "Array: "; for(int i:arr) cout << i << " "; cout << endl;
    cout << "Pair with product " << target << " exists? " << (isProduct(arr, target)?"Yes":"No") << endl;
    return 0;
} 