#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int recursive(vector <int> a,int low,int high,int target){
    if(low>high)return -1;
    int mid=low+(high-low)/2;
    if(a[mid]==target)return mid;
    else if(a[mid]<target)return recursive(a,mid+1,high,target);
    else return recursive(a,low,mid-1,target);
}
int main(){
    vector <int> nums{1,2,34,5,6,1};
    int target=3;
    int res=search(nums,target);
    cout<<"The element "<<target<<" is present at index: "<<res<<endl;
    return 0;
}