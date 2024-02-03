#include <bits/stdc++.h> 
using namespace std;
// brute
// not marking as 0 as it will make whole mtrix 0, we only need to make 0 for 0's present in ques not for 0's after converting
void markrow(vector<vector<int>> &matrix, int n, int m,int i){
    // this is done to mark all 1 in same row as -1 
	for(int j=0;j<m;j++){
		if(matrix[i][j]!=0){
			matrix[i][j]=-1;
		}
	}
}
void markcol(vector<vector<int>> &matrix, int n, int m,int j){
    // this is done to mark all 1 in same col as -1 
	for(int i=0;i<n;i++){
		if(matrix[i][j]!=0){
			matrix[i][j]=-1;
		}
	}
}
vector<vector<int>> brutezeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				markrow(matrix,n,m,i);
				markcol(matrix,n,m,j);
			}
		}
	}
	// giving 0
	for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++) {
			if(matrix[i][j]==-1){
				matrix[i][j]=0;
			}

        }
    }
	return matrix;
}
// better
vector<vector<int>> betterzeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  int col[m] = {0};
  int row[n] = {0};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (row[i]==1 || col[j]) {
        matrix[i][j] = 0;
      }
    }
  }
  return matrix;
}
int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = brutezeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}