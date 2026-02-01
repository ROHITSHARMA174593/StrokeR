#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& mat) {
    
	int rowSize = mat.size(), colSize = mat[0].size();

	for(int i=0;i<rowSize-1;i++){
		for(int j=i+1;j<colSize;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}

	return mat;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> res = transpose(mat);
    cout << "Transpose Matrix:" << endl;
    for(auto &row : res){ for(int v:row) cout<<v<<" "; cout<<endl; }
    return 0;
}