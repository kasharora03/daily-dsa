#include <bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){
    for (int i = 1;i<n;i++){
        for(int j=0;j<n-i;j++){
            // because last one it sorted at correct position after each iteration
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
// diff loop values
void bubble2(int a[],int n){
    // i have total n-1 passes
    for (int i = n-1;i>0;i--){
        // j will run from 0 to i-1 i.e first pass will iterate 4 ele
        for(int j=0;j<i-1;j++){
            // because last one it sorted at correct position after each iteration
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
// vector
void bvector(vector<int>& arr, int n) 
{
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter"<<i<<"number:";
        cin>>a[i];
    }
    bubble(a,n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    // vector case
    vector<int> arr1 = {64, 25, 12, 22, 11};
    bvector(arr1,5);
     for (int num : arr1) {
        std::cout << num << " ";
    }
}