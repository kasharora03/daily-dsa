#include <iostream>
#include <vector>
using namespace std;
void printSpiral(vector<vector<int>> &Matrix)
{
    int startRow = 0;
    int endRow = Matrix.size() - 1;
    int startCol = 0;
    int endCol = Matrix[0].size() - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // Top
        for (int j = startCol; j <= endCol; j++)
        {
            cout << Matrix[startRow][j] << " ";
        }
        // Right
        for (int j = startRow + 1; j <= endRow; j++)
        {
            cout << Matrix[j][endCol] << " ";
        }
        // Bottom
        for (int j = endCol - 1; j >= startCol; j--)
        {
            cout << Matrix[endRow][j] << " ";
        }
        // Left
        for (int j = endRow - 1; j >= startRow + 1; j--)
        {
            cout << Matrix[j][startCol] << " ";
        }
        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> Matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    printSpiral(Matrix);
    return 0;
}
