#include <bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    // two array  for left and right
      int len1=mid-s+1;
      int len2=e-mid;
    //   allocating memory
    int *first = new int[len1];
    int *second = new int[len2];
    // copy array into new array
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++]; 
        // mainArrayIndex++;
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++]; 
        // mainArrayIndex++;
    }
    // sort+ array
    int index1=0;
    int index2=0;
   mainArrayIndex=s;
   while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[mainArrayIndex]=first[index1];
        index1++;
        mainArrayIndex++;
    }
    else{
        arr[mainArrayIndex]=second[index2];
        index2++;
        mainArrayIndex++;
    }
   }
   while(index1 <len1){
    arr[mainArrayIndex]=first[index1];
    index1++;
    mainArrayIndex++;
   }
   while(index2 <len2) {
    arr[mainArrayIndex]=second[index2];
    index2++;
    mainArrayIndex++;
   }
    delete []first;
    delete []second;
}
void mergesort(int *arr,int s,int e){
    if (s>=e){
        return;
    }
    int mid=(s+e)/2;
    // sort left
    mergesort(arr,s,mid);
    // sort right 
    mergesort(arr,mid+1,e);
    // merge
    merge(arr,s,e);
}
    int main() {
    int arr[5]={1,3,5,4,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,n-1);
    cout<<"after:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}