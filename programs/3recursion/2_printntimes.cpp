// print a name n times
#include <iostream>
#include <vector>

using namespace std;

string s="Coding Ninja";
vector <string> v;
void solve(int n){
    if(n>1){
        solve(n-1);
    }
    v.push_back(s);
}
vector<string> printNTimes(int n) {
    if(n==1){
        v.push_back(s);
        return v;
    }
    solve(n);
    return v;
}
int main()
{
    vector <string> res=printNTimes(3);
    for(auto it: res){
        cout<<it;
    }
    return 0;
}