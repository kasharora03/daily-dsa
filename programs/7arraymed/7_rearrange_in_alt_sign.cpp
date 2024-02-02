// this works onlyyyyyyyyy for equal neg and postive numbers
#include <bits/stdc++.h>
using namespace std;
vector <int> altbrute(vector <int> v,int n){
    // tc=o(2n) sc=o(n)
    vector<int> pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            neg.push_back(v[i]);
        }
        else{
            pos.push_back(v[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }
    return v;
} 
vector<int> optimal(vector <int> v,int n){
    vector<int>ans(n,0);
    int pos=0,neg=1;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            ans[neg]=v[i];
            neg=neg+2;
        }
        else{
            ans[pos]=v[i];
            pos=pos+2;
        }
    }
    return ans;
}
int main(){
    vector <int> v={1,2,3,-2,-3,-4};
    int n=v.size();
    vector <int>res=altbrute(v,n);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    // optimal
    vector <int>res1=optimal(v,n);
    for(auto it:res1){
        cout<<it<<" ";
    }
}