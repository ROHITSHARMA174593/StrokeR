#include <iostream>
using namespace std;

int mySqrt(int x) {
    // Your code here

	if(x<=1){
		return x;
	}


	int start = 1, end = x, ans;

	while(start<=end){
		long long mid = start+(end-start)/2;

		if(mid*mid==x){
			return mid;
		}
		// Right side move
		else if(mid*mid<x){
            ans = mid;
			start = mid+1;
		}
		// left side ko ko move kar rahe hai
		else{
			end = mid-1;
		}
	}

	return ans;
}

int main() {
    int x = 8;
    cout << "Sqrt of " << x << " is " << mySqrt(x) << endl;
    x = 16;
    cout << "Sqrt of " << x << " is " << mySqrt(x) << endl;
    return 0;
}