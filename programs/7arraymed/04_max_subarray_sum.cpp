#include <bits/stdc++.h>
using namespace std;
int optimal(vector <int> v,int n){
    int sum=0;
    int maxi=INT_MIN;
    for(auto it:v){
        sum=sum+it;
        maxi=max(maxi,sum);
        if (sum<0)
        sum=0;
    }
    return maxi;
}
long long maxSubarraySum(vector<int> arr, int n)

{
    long long sum =arr[0];
    long long max =arr[0];
    if(sum<0)
    {
        sum=0;
    }
    for(int i=1;i<n;i++)
    {
        sum+=arr[i];
        if(sum>max)
        {
            max=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    if(max<0)
    {
        return 0;
    }
    return max;
}
int main(){
    vector <int> v={-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10} ;
    int n=v.size();
    int a=optimal(v,n);
    cout<<a<<endl;
}