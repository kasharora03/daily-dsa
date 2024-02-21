#include <bits/stdc++.h>
using namespace std;
int brute(int n, int m) {
    for (int i = 0; i <= m; ++i) {
        double powResult = pow(i, n);
        if (powResult == m) {
            return i;
        }
    }
    return -1; 
}
// using binary search
int fun(int mid,int n,int m){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*mid;
        if(ans>m)return 2;
    }
    if(ans==m)return 1;
    return 0;
}
int optimal(int n,int m){
    int low=0,high=m;
    while(low<=high){
        int mid=(low+high)/2;
        int newmid=fun(mid,n,m);
        if(newmid==1){
            return mid;
        }
        else if(newmid==0){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n=4;
    int m=27;
    cout<<optimal(n,m);
}
