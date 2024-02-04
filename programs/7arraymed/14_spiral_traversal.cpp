#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>>& Matrix) {
    vector<int> ans;
    int startRow = 0;
    int endRow = Matrix.size() - 1;
    int startCol = 0;
    int endCol = Matrix[0].size() - 1;
    while (startRow <= endRow && startCol <= endCol) {
        // Top
        for (int j = startCol; j <= endCol; j++) {
            ans.push_back(Matrix[startRow][j]);
        }
        startRow++;
        // Right
        for (int j = startRow; j <= endRow; j++) {
            ans.push_back(Matrix[j][endCol]);
        }
        endCol--;
        // Bottom
        if (startRow <= endRow) {  
            // Check if there are rows left i.e top has not exceeded bottom
            for (int j = endCol; j >= startCol; j--) {
                ans.push_back(Matrix[endRow][j]);
            }
            endRow--;
        }
        // Left
        if (startCol <= endCol) {  
            // Check if there are columns left ie , right has not reached left
            for (int j = endRow; j >= startRow; j--) {
                ans.push_back(Matrix[j][startCol]);
            }
            startCol++;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> Matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> ans=spiralMatrix(Matrix);
    for(auto  i:ans){
        cout<<i<<" ";
    }
    return 0;
}
