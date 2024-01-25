#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    int n1=0;
    while(n1<q){
        int num;
        cout<<endl<<"enter no to search:";
        cin>>num;
        // fetch
        cout<<hash[num]<<endl;
        n1++;
    }
    return 0;
}