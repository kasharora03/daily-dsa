#include <bits/stdc++.h>
using namespace std;
// to increase cnt if one number is greater than twice of other
int brute(vector <int> & a) { 
    // tc=o(n2) sc=o(1)
    int n=a.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>2*a[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    vector <int> a={13,6,4};
    int res=brute(a);
    cout<<res;
    return 0;
}
