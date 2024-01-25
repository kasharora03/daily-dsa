#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   map <char,int> mpp;
   for(int i=0;i<s.size();i++){
    mpp[s[i]]++;
   }
   int q;
   cout<<"\nenter no of elements to be searched";
   cin>>q;
   int n=0;
   while(n<q){
    char c;
    cin>>c;
    cout<<"\n"<<mpp[c];
    n++;
   }
}
