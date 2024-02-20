#include <bits/stdc++.h>
using namespace std;
// just calcuate lower bound because we will insert at ele greater tahn or equal to in sorted
int searchInsert(vector<int>& a, int target)
{
	int n=a.size();
    int ind=n;
	int low=0;
    int high=n-1;
    while(low<= high){
        int mid=(low+high)/2;
        if(a[mid]>=target){
            ind=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ind;
}