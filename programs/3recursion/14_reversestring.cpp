#include <bits/stdc++.h>
using namespace std;
void rev(string &s,int i,int j){
    if (i >= j) return ;
    swap(s[i],s[j]);
    rev(s,i+1,j-1);
}
int main(){
    string s="avaab";
    cout<<"----------Original String : "<<s<<endl;
    int i=0;
    int j=s.length()-1;
    rev(s ,i,j);
    cout<<s;
    return 0;
    
}