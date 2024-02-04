#include <bits/stdc++.h> 
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    vector<int> vect ={1,2,3,4,5};
    cout<<"Original array: ";
    for (auto i : vect)
    cout << i << " ";
    cout<<"\nafter shift";
    vect=rotateArray(vect,vect.size());
    for (auto i : vect)
    cout<<i<<" ";
}