#include <set>
#include <vector>

void columnZero(vector<vector<int>> &mat, int c, int m) {
	for(int i = 0; i < m; i++) {
		mat[i][c] = 0;
	}
}

void rowZero(vector<int> &mat, int n) {
	for(int i = 0; i < n; i++) {
		mat[i] = 0;
	}
}

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m = matrix.size();
	int n = matrix[0].size();
	int i, j;
	vector<vector<int>> copy = matrix;
	set<int> c_s, r_s;
	
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if(matrix[i][j] == 0) {
				if(c_s.find(j) == c_s.end()) {
					c_s.insert(j);
					columnZero(copy, j, m);
				}
				if(r_s.find(i) == r_s.end()) {
					r_s.insert(i);
					rowZero(copy[i], n);
				}
			}
		}
	}
	matrix = copy;
}