#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k)return mid;
        // left half is sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k &&k<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        // right half is sorted
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector <int> arr={7,8,9,1,2,4};
    int k=8;
    int res=search(arr,arr.size(),k);
    cout<<res;
}