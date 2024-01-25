#include <iostream>
#include <vector>

using namespace std;
// vector <int>v;
// 1
// void solve(int i,int x ){
//     if(i>x){
//         return;
//     }
//     v.push_back(i);
//     solve(i+1,x);

// }
// vector<int> printNos(int x) {
//     solve(1,x);
//     return v;
// }
// int main(){
//     vector <int> res=printNos(3);
//     for(auto it: res){
//         cout<<it;
//     }
//     return 0;
// }
// 2
// vector<int> printNos(int x) {
//     if(x==1){
//         v.push_back(1);
//         return v;
//     }else{
//         if (x > 1) {
//           printNos(x - 1);
//         }
//         v.push_back(x);
//     }
//     return v;
// }
// int main(){
//     vector <int> res=printNos(3);
//     for(auto it: res){
//         cout<<it;
//     }
//     return 0;
// }
// 3
vector <int>v;
void solve(int x){
    if (x > 1) {
          solve(x - 1);
        }
        v.push_back(x);
}
vector<int> printNos(int x) {
    if(x==1){
        v.push_back(1);
        return v;
    }else{
        solve(x);
    }
    return v;
}
int main(){
    vector <int> res=printNos(3);
    for(auto it: res){
        cout<<it;
    }
    return 0;
}