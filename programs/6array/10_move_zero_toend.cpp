#include <bits/stdc++.h>
using namespace std;
// vector<int> moveZeros(int n, vector<int> a) {
//     vector <int> temp;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//             temp.push_back(a[i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//          if(a[i]==0){
//             temp.push_back(a[i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         a[i]=temp[i];
//     }
//     return a;
// }
vector<int> moveZeros(int n, vector<int> a) {
    // last index
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            // stores index of zero element
           j=i;
           break;
        }
    }
    // no non zero
    if(j==-1)
    return a;
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
             swap(a[i],a[j]);
            // move to second last index
            j++;
        }
    }
    return a;
}
int main(){
    vector <int> a={8,9,0,2,4,0,0,2,1};
    int n=a.size();
    cout<<"The array after moving zeros is: ";
    vector<int> res = moveZeros(n,a);   
    for(auto it: res){
        cout<<it;
    }
}