#include <iostream>
#include <vector>
using namespace std;
vector <int> eachrow(int rownumber){
    long long ans=1;
    vector<int> eachrow;
    eachrow.push_back(1);
    for(int column=1;column<rownumber;column++){
        ans=ans*(rownumber-column);
        ans=ans/column;
        eachrow.push_back(ans);
    }
    return eachrow;
}
vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> triangle;
    for(int i=1;i<=n;i++){
        triangle.push_back(eachrow(i));
    }
    return triangle;
}
int main(){
    vector<vector<int>> tri=pascalTriangle(5);
    cout<<"Pascal Triangle is : \n"<<endl;
    for(auto row:tri){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}