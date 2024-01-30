#include <bits/stdc++.h>
using namespace std;
int brute(int a[],int n){
    // tc= n square
     for(int i=0;i<n;i++){
        int num=a[i];
        int cnt =0;
        for(int j=0;j<n;j++){
            if(a[j]==num){
                cnt++;
            }
            
        }
        if(cnt==1)
            return num;
     }
     return -1;
}
int better(int a[],int n){
    int maxi=a[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]==1){
            return a[i];
        }
    }
    return  -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        }
        cout<<"res";
    cout<<brute(a,n)<<endl;
    cout<<better(a,n);
}