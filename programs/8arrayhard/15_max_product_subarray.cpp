#include <bits/stdc++.h>
using namespace std;
int brute(vector <int> a){
    int maxi=INT_MIN;
    int n=a.size();
    int product;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            product=1;
            for(int k=i;k<j;k++){
                product=product*a[k];
            }
            maxi=max(product,maxi);
        }
    }
    return maxi;
}
int main(){
    vector <int> a={2,4,-6,4};
    int res=brute(a);
    cout<<res;
}