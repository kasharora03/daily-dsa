#include <bits/stdc++.h>
// #include <climits>
using namespace std;
int isSorted(int n, vector<int> a) {
    // int res=1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    vector <int> a={1,4,5,7,2};
    int n=a.size();
    cout<<isSorted(n,a);
    return 0;
}