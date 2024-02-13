#include <bits/stdc++.h>
using namespace std;
int brute(vector <int> a){
    int cnt=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])cnt++;
        }
    }
    return cnt;
}
int main(){
    vector <int> a={1,5,3,2};
    int res=brute(a);
    cout<<res;
}