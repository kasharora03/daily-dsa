#include <bits/stdc++.h>
using namespace std;
int brute(vector<int> a)
{
    int maxi = INT_MIN;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int product = 1;
            for (int k = i; k <= j; k++)
            {
                product = product * a[k];
                maxi = max(product, maxi);
            }
            maxi = max(product, maxi);
        }
    }
    return maxi;
}
int better(vector<int> a)
{
    int maxi = INT_MIN;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i + 1; j < n; j++)
        {
            
            product = product * a[j];
            maxi = max(product, maxi);
        }
        maxi = max(product, maxi);
    }
    return maxi;
}
int optimal(vector <int > &a){
    int pre=1,suff=1;
    int maxproduct=INT_MIN;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(pre==0){
            pre=1;
        }
        if(suff==0){
            suff=1;
        }
        pre=pre*a[i];
        suff=suff*a[n-i-1];
        maxproduct=max(maxproduct,max(pre,suff));
    }
    return  maxproduct;
}
int main()
{
    vector<int> a = {2};
    int res = brute(a);
    cout << res;
}