#include <bits/stdc++.h> 
using namespace std;
vector<int> lrotateArray(vector<int>& arr, int n) {
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];        //123
    }
    arr[0]=temp;
    return arr;
}
int main(){
    vector<int> vect ={1,2,3,4,5};
    cout<<"Original array: ";
    for (auto i : vect)
    cout << i << " ";
    cout<<"\nafter shift";
    vect=lrotateArray(vect,vect.size());
    for (auto i : vect)
    cout<<i<<" ";
}