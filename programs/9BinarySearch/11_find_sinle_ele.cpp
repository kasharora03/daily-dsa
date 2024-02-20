#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& arr)
{
	int n = arr.size();
    int ans = -1;
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
            }
        }
        
        if (cnt == 1) {
            ans = arr[i]; 
            break;
        }
    }
    return ans;
}
int brute(vector<int> a){
    int n=a.size();
    if(n==1)return ;
    for(int i=0;i<n;i++){
        if(i==0){
            if(a[i]!=a[i+1]){
                return a[i];
            }
        }
        if(i==n-1){
            if(a[i]!=a[i-1]){
                return a[i];
            }
        }
        else{
            if(a[i]!=a[i-1] && a[i]!=a[i+1]){
                return a[i];
            }
        }
    }
    return -1;
}
// using binary search
int optimal(vector<int> a){
    int n=a.size();
    if(n==1)return a[0];
    if(a[0]!=a[1])return a[0];
    if(a[n-1]!=a[n-2])return a[n-1];
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]!=a[mid+1] && a[mid]!=a[mid-1]){
            return a[mid];
        }
        // we are in left subarray
        if((mid%2==1)&& (a[mid]==a[mid-1])|| (mid%2==0) && (a[mid]==a[mid+1])){
            low=mid+1;
        }
        // on  right
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector <int> a={1,1,2,2,3,4,4,5,5};
    int res=optimal(a);
    cout<<res;
}