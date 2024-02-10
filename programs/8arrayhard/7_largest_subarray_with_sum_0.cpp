#include <bits/stdc++.h>
using namespace std;
int maxlen(vector<int> & arr,int n){
    unordered_map<int,int> mp;
    int target=0;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return maxi;
}
int main(){
    vector <int> arr={1,-1,2,-2,8,4,3,5,-7,-5};
    int res=maxlen(arr,arr.size());
    cout<<res;
    return 0;
}