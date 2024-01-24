#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    // because last need not to b e compared with others n-2 , for best case use n-1
    for(int i=0;i<=n-1;i++){
        int min=i;
        // as it needs to be compared till last ele
        for(int j=i;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
void ssvector(vector<int>&arr) {
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
int main(){
    // array case
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter"<<i<<"number:";
        cin>>a[i];
    }
    selectionsort(a,n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    // vector case
    vector<int> arr = {64, 25, 12, 22, 11};
    ssvector(arr);
     for (int num : arr) {
        std::cout << num << " ";
    }
}