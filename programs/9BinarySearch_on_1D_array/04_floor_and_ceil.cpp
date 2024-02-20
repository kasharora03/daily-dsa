#include <bits/stdc++.h>
using namespace std;
int floorfun(vector<int> &a, int n, int x){
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<=x){
			ans=a[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;
}
int ceilfun(vector<int> &a, int n, int x){
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]>=x){
			ans=a[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int> p={floorfun(a,n,x),ceilfun(a,n,x)};
	return p;
}
int main(){
    vector<int> a = {1, 3, 5, 7};
    pair<int,int> ans=getFloorAndCeil(a,4,6);
    cout << "Floor: " << ans.first << "\n";
    cout << "Ceil: " << ans.second << "\n";
    return 0;
}