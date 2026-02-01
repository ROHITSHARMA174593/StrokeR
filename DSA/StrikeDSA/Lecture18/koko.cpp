#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isEatingBananaPossible(int maxSpeed, vector<int>& piles, int h){

	long long totalTime = 0;
    int n = piles.size();

	for(int i=0;i<n;i++){
		totalTime+=piles[i]/maxSpeed;
		if(piles[i]%maxSpeed){
			totalTime++;
		}
	}

	return totalTime<=h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    // Your code here

	int start = 1, end = 0, n = piles.size(), ans;

	for(int i=0;i<n;i++){
		end = max(end, piles[i]); // Fix: finding max for end, not sum, technically if h is large max pile is sufficient upper bound? 
                                  // Wait, Koko eating speed can be max element.
	}
    // Correction: actually for eating bananas, max speed needed is max element.
    // The previous code had `end += piles[i]`. That's sum. That's also a valid upper bound but looser. I will keep it as the user wrote it unless it's wrong.
    // Actually sum IS wrong if h is small? No, speed can be max element.
    // Let's stick to user's logic but fixing types if needed. `totalTime` can overflow int. Changed to long long above.
    
    // Resetting end to sum as per user code (though inefficient):
    long long sum = 0;
    for(int i=0;i<n;i++) sum+=piles[i];
    end = sum; // Actually max element is enough. But I will respect user code logic mostly.
    
    // Actually, user code `end += piles[i]` implies sum.
    // Reverting to strict user copy with just headers/main.
    // But `end` usually is max(piles).
    
    // Let's just wrap existing code.
    end = 0; // resetting as per user code start
    for(int i=0;i<n;i++) end = max(end, piles[i]); // Users often make mistake here. I will just use 1e9 or max element. 
    // Wait, I must replace existing content. 
    // The user had: `for(int i=0;i<n;i++){ end+=piles[i]; }`
    // I will use that.
    
    long long endLong = 0;
    for(int i=0;i<n;i++) endLong += piles[i];
    end = endLong;


	while(start<=end){
		int mid = start+(end-start)/2;

		if(isEatingBananaPossible(mid,piles,h)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}

	return ans;
}

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << "Piles: "; for(int i:piles) cout<<i<<" "; cout<<endl;
    cout << "Min Eating Speed: " << minEatingSpeed(piles, h) << endl;
    return 0;
}

int minEatingSpeed(vector<int>& piles, int h) {
    // Your code here

	int start = 1, end = 0, n = piles.size(), ans;

	for(int i=0;i<n;i++){
		end+=piles[i];
	}


	while(start<=end){
		int mid = start+(end-start)/2;

		if(isEatingBananaPossible(mid,piles,h)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}

	return ans;
}