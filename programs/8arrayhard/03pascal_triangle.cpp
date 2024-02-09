#include <iostream>
#include <vector>
using namespace std;
vector <int> eachrow(int rownumber){
    long long ans=1;
    vector<int> row;
    row.push_back(1);
    for(int column=1;column<rownumber;column++){
        cout<<ans<<column<<rownumber<<endl;
        ans=ans*(rownumber-column);
        // cout<<"after *"<<ans<<endl;
        ans=ans/column;
        // cout<<"after /"<<ans<<endl;
        row.push_back(ans);
    }
    return row;
}
vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> triangle;
    for(int i=1;i<=n;i++){
        triangle.push_back(eachrow(i));
    }
    return triangle;
}
int main(){
    vector<vector<int>> tri=pascalTriangle(6);
    cout<<"Pascal Triangle is : \n"<<endl;
    for(auto it:tri){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}