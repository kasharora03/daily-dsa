#include <bits/stdc++.h>
using namespace std;
vector <int> brute(vector<int>v,int n){
    vector <int>ans;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(v[j]>v[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(v[i]);
        }
    }
    return ans;
}
vector <int>optimal(vector<int>v,int n){
    vector <int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(v[i]>maxi){
            ans.push_back(v[i]);
            maxi=v[i];
        }
        // maxi=max(maxi,v[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector <int> v={10,22,16,3,0,6};
    int n=v.size();
    vector <int>a=brute(v,n);
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    vector <int>b=optimal(v,n);
    for(auto it:b){
        cout<<it<<" ";
    }
}