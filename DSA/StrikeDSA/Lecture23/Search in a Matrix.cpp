#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
	// 
	int row = matrix.size() , col = matrix[0].size();

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(matrix[i][j]==target){
				return true;
			}
		}
	}


	return false;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};
    int target = 9;
    cout << "Matrix contains " << target << "? " << (searchMatrix(matrix, target)?"Yes":"No") << endl;
    return 0;
}