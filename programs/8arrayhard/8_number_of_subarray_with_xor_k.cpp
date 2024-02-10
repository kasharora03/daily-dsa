#include <bits/stdc++.h>
using namespace std;
int brute(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int xor1 = 0;
            for (int k = i; k <= j; k++)
            {
                xor1 = xor1 ^ arr[k];
            }
            if (xor1 == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int optimal(vector < int > arr, int k) {
    int n=arr.size();
    int xr=0;
    map<int,int> mp;
    mp[xr]++; //{0,1}
    int cnt=0;
    for(int i=0;i<n;i++){
        xr=xr^arr[i];
        int x=xr^k;
        cnt=cnt+mp[x];
        mp[xr]++;
    }
    return cnt;
}
int better(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int xor1 = 0;
        for (int j = i; j < n; j++){
            xor1 = xor1 ^ arr[j];
            if (xor1 == k){
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    vector<int> arr = {2, 0, 4, 6, 0, 6, 12, -6};
    int k = 6;
    int res = better(arr, k);
    cout << res;
}