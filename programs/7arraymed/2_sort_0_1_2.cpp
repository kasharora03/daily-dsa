// brute force is to use any so alrting algo merge sort tc=nlogn sc=o(n)due to temp array
// better with single iteration increasing count when each number occur and fill 0,1,2 of that frequency
#include <bits/stdc++.h>
using namespace std;

// void better(vector<int>& arr, int n)
void better(int arr[], int n)
{
    // tc=O(2n)
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    // initial index of arr
    int i = 0;
    // Fill array with 0s
    for (int j = 0; j < cnt0; j++) {
        arr[i++] = 0;
    }

    // Fill array with 1s
    for (int j = 0; j < cnt1; j++) {
        arr[i++] = 1;
    }

    // Fill array with 2s
    for (int j = 0; j < cnt2; j++) {
        arr[i++] = 2;
    }

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
}
//DUTCH NATIONAL FLAG ALGORITHM
// evrything from 0to low-1 will be 0(extreme left)
// low to mid -1 is 1
// mid to high contains random numbers (0,1,2)
// high+1 to n-1 are 2(extreme right)
// use 3 pointers
// first mid is at index 0 and high at n-1 because we consider all of them are unsorted till now
// if a[mid]==0 then move it to first place swap(a[low],a[midaa     ]) and low++;mid++;
// if a[mid]==1 simply mid++;
// if a[mid]==2 then move it to last place swap(a[high],a[mid]) and high--;
// 0,low-1,low,mid-1,mid,high,high+1,n-1
void optimal(vector<int>& arr, int n){
     int low=0,mid=0,high=n-1;
    while(mid<=high){
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    // vector<int> arr = {2, 1, 0, 1, 2, 0, 1};
    int arr[5]={1,0,0,2,1};
    // int n = arr.size();

    better(arr, 5);

    return 0;
}
