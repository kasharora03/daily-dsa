#include <bits/stdc++.h>
using namespace std;
// for 1 peak
int brute(vector <int> a){
    int n=a.size();
    for(int i=0;i<n;i++){
        if((i==0||a[i-1]<a[i]) && (i==n-1|| a[i]>a[i+1])){
            return a[i];
        }
    }
    return  -1;
}
int optimal(vector <int> a){
       int n = a.size();
    if (n == 1) {
        return 0;
    }
    if (a[0] > a[1]) {
        return 0;
    }
    if (a[n - 1] > a[n - 2]) {
        return n - 1;
    }
    int low = 1;  // Start from 1 instead of 0
    int high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1]) {
            return mid;
        } else if (a[mid] > a[mid - 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> a={1,2,4,2,1};
    cout<<brute(a);
}