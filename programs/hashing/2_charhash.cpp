#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // precompute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        cout<<endl<<s[i];
        cout<<"\nafterv add"<<hash[s[i]]++;
    } 
    int q;
    cin>>q;
    int n=0;
    while(n<q){
        char c;
        cin>>c;
        cout<<endl;
        cout<<hash[c];
        n++;
    }
}