#include <bits/stdc++.h>
using namespace std;

vector<int> mine(vector<int> a) {
    int n = a.size();
    vector<int> ans;
    map<int, int> mp;
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        // handle duplicates
        if (mp[a[i]] > 1) {
            ans.push_back(a[i]);
        }
        
    }
    // handle missing could be till n also but that waste space
    for (int i = 1; i <= max+1; i++) {
        if (mp[i] == 0) {
            ans.push_back(i);
        }
    }

    return ans;
}

vector<int> brute(vector<int> a){
    int n=a.size();
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(hash[i]>1){
            ans.push_back(i);
        }
        if(hash[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    vector<int> a={1,1,2,3};
    vector<int> ans=brute(a);
    for(auto it:ans){
        cout<<it<<" ";
    }
}
