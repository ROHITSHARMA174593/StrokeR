#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool find4Numbers(vector<int>& A, int X) {
    
	// sort
	sort(A.begin(),A.end());
	int n = A.size();

	for(int i=0;i<n-3;i++){
		for(int j=i+1;j<n-2;j++){
			int start = j+1, end = n-1, newTarget= X-A[i]-A[j];

			while(start<end){
				if(A[start]+A[end]==newTarget){
					return true;
				}
				else if(A[start]+A[end]<newTarget){
					start++;
				}
				else{
					end--;
				}
			}
		}
	}

	return false;
}

int main() {
    vector<int> A = {1, 4, 45, 6, 10, 12};
    int X = 21;
    cout << "Array: "; for(int i:A) cout<<i<<" "; cout<<endl;
    cout << "Has 4 elements summing to " << X << "? " << (find4Numbers(A, X)?"Yes":"No") << endl;
    return 0;
}