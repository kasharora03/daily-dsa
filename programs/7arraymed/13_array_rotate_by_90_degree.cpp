#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<vector<int>> idea(vector<vector<int>>& matrix, int n, int m) {
    vector<vector<int>> temp(m, vector<int>(n, 0));     
    //impppppppppppppp
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[j][n - i - 1] = matrix[i][j];
        }
    }
    return temp;
}
void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = idea(matrix, n, m);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout<<endl;
        
    }
    // optimal
     vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout << "\n optimal Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
    }
    return 0;
}
