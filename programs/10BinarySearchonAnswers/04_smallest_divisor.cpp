#include <bits/stdc++.h>
using namespace std;
int maxii(vector<int>& arr){
	int maxi=INT_MIN;
	int n=arr.size();
	for(int i=0;i<n;i++){
          if (arr[i] > maxi) {
            maxi = arr[i];
          }
        }
        return maxi;
}
int smallestDivisor(vector<int>& arr, int limit)
{
    // tc=max*n
    // sc=o(1)
    int n = arr.size();
    int maxi = maxii(arr);
    for (int d = 1; d <= maxi; d++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + ceil((double)(arr[i]) /(double) (d));
        }
        if (sum <= limit) {
            return d;
        }
    }
    return -1;
}
// using binary searchhhhhhhhhhhhhhhh
int sumafterdivide(vector <int> arr,int d){
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum=sum+ceil((double)(arr[i])/(double)(d));
    }
    return sum;
}
int maxii(vector<int>& arr){
	int maxi=INT_MIN;
	int n=arr.size();
	for(int i=0;i<n;i++){
          if (arr[i] > maxi) {
            maxi = arr[i];
          }
        }
        return maxi;
}
int smallestDivisor(vector<int>& arr, int limit)
{
    int n=arr.size();
	if(n>limit){
        return -1;
    }
    int low=0,high=maxii(arr);
    while(low<=high){
        int mid=(low+high)/2;
        if(sumafterdivide(arr,mid)<=limit){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}