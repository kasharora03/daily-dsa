#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr){
    int n=arr.size();
    int low=0,high=n-1;
    int ans=INT_MAX;
    int ind=-1;
    while(low<=high){
        int  mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                ind=low;
                ans=arr[low];
            }
            break;
        }
        // if left is sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans=arr[low];
                ind=low;
            }
            // got min from left now goto right sbarray
            low=mid+1;
        }
        // if right is sorted
        else{
            if(arr[mid]<ans){
                ind=mid;
                ans=arr[mid];
            }
            high=mid-1;
        }

    }
    return ind;
}
int main()
{
    vector<int> arr = {4, 5, 6, 1, 2, 3};
    int ans = findKRotation(arr);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}