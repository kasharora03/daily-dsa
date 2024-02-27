#include <bits/stdc++.h>
using namespace std;
// binary method
int finddays(vector <int> &weight,int capacity){
    int days=1,load=0;
    for(int i=0;i<weight.size();i++){
        if(weight[i] +load>capacity){
            days=days+1;
            load=weight[i];
        }
        else{
            load=load+weight[i];
        }
    }
    return days;
}
int binarybetter(vector<int> weight,int days){
    int low=*max_element(weight.begin(),weight.end());
    int high=accumulate(weight.begin(),weight.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int daysreq=finddays(weight,mid);
        if(daysreq<=days){
            high=mid-1;

        }
        else{
            low=mid+1;
        }
    }
    return low;
}
// bruteeeeeeeeeeeeeeee
int findDays(vector<int> &weights, int cap) {
    int days = 1; //First day.
    int load = 0;
    int n = weights.size(); //size of array.
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > cap) {
            days += 1; //move to next day
            load = weights[i]; //load the weight.
        }
        else {
            //load the weight on the same day.
            load += weights[i];
        }
    }
    return days;
}

int brute(vector<int> &weights, int d) {
    //Find the maximum and the summation:
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);

    for (int i = maxi; i <= sum; i++) {
        if (findDays(weights, i) <= d) {
            return i;
        }
    }
    //dummy return statement:
    return -1;
}

int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = brute(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}