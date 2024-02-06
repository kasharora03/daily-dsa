#include <bits/stdc++.h>
using namespace std;
int brute(vector <int> a,int n){
    // tc=O(n2)
    int cnt;
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                cnt++;
            }

        }
        if(cnt>n/2)
        return a[i];
    }
    return -1;
}
int better(vector <int>a,int n){
    map <int,int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second > (n / 2)){
            return it.first;
        }
    }
    return -1;
}
// moore's voting algo
int optimal(vector <int>a,int n){
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=a[i];
        }
        else if(a[i]==el){
            cnt++;
        }
        else{cnt--;
        }
    }
    // to count freq of el that is highest occ ele through moree's voting algorithm
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i]==el){
            cnt1++;
        }
    }
    if(cnt1>(n/2)){
        return el;
    }
    return -1;
}
int main(){
    vector <int> a={1,2,2,2,3,2,2,5};
    int out=brute(a,a.size());
    cout<<out;
    int outbetter=better(a,a.size());
    cout<<endl<<outbetter;
    int outoptimal=optimal(a,a.size());
    cout<<endl<<outoptimal;
}