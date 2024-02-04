#include <bits/stdc++.h>
using namespace std;
// brute
string read1(int n, vector<int> a, int target)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // for last ind
            if(i==j)
            continue;
            if(a[i]+a[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
// better
string read(int n, vector<int> a, int target){
    map <int,int> mp;
    for(int i=0;i<n;i++){
        int one=a[i];
        int sec=target - one;
        if(mp.find(sec)!=mp.end()){
            return "YES";
        }
        mp[one]=i;
    }
    return "NO";
}
// to return index
 vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        map <int,int> mp;
    for(int i=0;i<n;i++){
        int one=a[i];
        int sec=target - one;
        if(mp.find(sec)!=mp.end()){
            return {mp[sec],i};
        }
        mp[one]=i;
    }
    return {-1,-1};
    }
string read(int n, vector<int> a, int target){
    int left=0;int right=n-1;
    sort(a.begin(),a.end());
    while(left<right){
        int sum=a[left]+a[right];
        if(sum==target){
            return "YES";
        }
        if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return "NO";
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) 
    cin >> x;
    int target;
    cout<<"enter target";
    cin>>target;
    string s=read(n,a,target);
    cout<<s;
}