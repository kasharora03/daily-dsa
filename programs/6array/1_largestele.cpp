#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int max=0;
    for(int i=0;i<n;i++){
            if(arr[i]>arr[max]){
                max=i;
            }
    }
    return arr[max];
}
int main(){
    vector<int> v = {12, 345, 23,78,45};
    cout << "The largest element is: "<<largestElement(v, v.size())<<endl;
    return 0;
}