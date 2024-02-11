#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		int start=arr[i][0];
		int end=arr[i][1];
		if(!ans.empty() && end<=ans.back()[1]){
			continue;
		}
		for(int j=i+1;j<n;j++){
			if(arr[j][0]<=end){
				end=max(end,arr[j][1]);
			}
			else{
				break;
			}
		}
		ans.push_back({start,end});
	}
	return ans;
}
vector<vector<int>> optimal(vector<vector<int>> &arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(ans.empty() || arr[i][0]> ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> v={{1,2},{4,5},{3,5},{2,8},{9,16},{10,11}};
    vector<vector<int>> ans=optimal(v);
    for(auto x:ans) {
        for(auto col:x){
            cout<<col<<" ";
        }
        cout<<endl;
        }
}