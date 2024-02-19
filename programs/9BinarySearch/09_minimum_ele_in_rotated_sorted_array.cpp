#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr)
{
	int n=arr.size();
	int low=0,high=n-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[high]){
			ans=min(ans,arr[low]);
			break;
		}
		if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			// we have now got least from left move to right now
			low=mid+1;
		}
		else{
			high=mid-1;
			ans=min(ans,arr[mid]);
		}
	}
	return ans;
}
int main(){
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    cout << "The smallest element in the array is: " << findMin(arr);
    return 0;
}