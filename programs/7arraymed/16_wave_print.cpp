#include <iostream>
#include <vector>
using namespace std;
vector<int> wave(vector<vector<int>>& matrix) {
    vector <int> ans;
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<=n-1;j++){
                ans.push_back(matrix[j][i]);
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                ans.push_back(matrix[j][i]);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> ans=wave(matrix);
    for(auto  i:ans){
        cout<<i<<" ";
    }
    return 0;
}