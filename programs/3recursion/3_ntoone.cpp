#include <iostream>
#include <vector>

using namespace std;
vector <int> v;
void solve(int i,int n ){
    if(i<1){
        return;
    }
    v.push_back(i);
    solve(i-1,n);

}
vector<int> printNos(int x) {
    solve(x,x);
    return v;
}
int main(){
    vector <int> res=printNos(3);
    for(auto it: res){
        cout<<it;
    }
    return 0;
}