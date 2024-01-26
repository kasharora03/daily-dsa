#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &arr, int low,int high){
    // choose the leftmost element as pivot
    int pivot = arr[low];
    int i=low;
    int j=high;
    while (i<j) {
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector <int> &arr,int low,int high){
    if(low<high){
        int pindex=partition(arr,low,high);
        qs(arr,low,pindex-1);
        qs(arr,pindex+1,high);
    }
}
int main(){
    vector <int> vect={4,23,6,78,10};
    cout<<"Given array is \n";
    for(auto x:vect){
        cout<<x<<" ";
        }cout<<endl;
    qs(vect,0,vect.size()-1);
    cout<<"\nSorted array is \n";
    for(auto x:vect){
        cout<<x<<" ";
        }
}