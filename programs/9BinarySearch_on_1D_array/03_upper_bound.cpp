#include <bits/stdc++.h>
using namespace std;
int upperbound(vector<int> a, int n, int target)
{
    // tc=o(log2 n)

    int low = 0;
    int high = n - 1;
    int ind = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > target)
        {
            ind = mid;
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ind;
}
int stlway(vector<int> arr, int target){
    int ub=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
    return ub;
}
int main(){
    vector <int> arr={1,2,3,4,5,7};
    cout<<"Upper Bound: "<<upperbound(arr,6,3)<<endl; 
    cout<<stlway(arr,3);
}