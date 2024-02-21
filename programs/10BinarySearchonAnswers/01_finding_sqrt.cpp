#include <bits/stdc++.h>
using namespace std;

int brute(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        if(i * i <= n){
            ans = i;
        }
        else{
            break;
        }
    }
    return ans;
}
int optimal(int n){
    int low=1;
    int high=n;
    while(low<=high){
        int mid=(low+high);
        int val=mid*mid;
        if(val<=n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;  
}

int main(){
    int n = 28;
    cout << optimal(n);
}