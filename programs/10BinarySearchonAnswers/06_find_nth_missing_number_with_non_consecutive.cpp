#include <bits/stdc++.h>
using namespace std;
int brute(vector < int > vec, int n, int k) {
    for(int i=0;i<n;i++){
        if(vec[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}
int missingK(vector < int > vec, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int missing = vec[mid] - (mid + 1);
        if (missing < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return k + high + 1;
}

int main()
{
    vector<int> vec = {2,3,8};
    int n = 3, k = 3;
    int ans = missingK(vec, n, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;
}