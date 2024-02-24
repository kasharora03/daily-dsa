#include <bits/stdc++.h>
using namespace std;
bool cowspossible(vector<int> &stalls,int distance,int totalcows){
    int n=stalls.size();
    int cows=1; //first cow  is placed in the first stall
    int last=stalls[0]; //to calcilate distance from last cows  position to current posistion of new cow
    for (int i = 1; i <n ; i++){
        if(stalls[i]-last>=distance){
            cows++;
            last=stalls[i];
        }
        if(cows>=totalcows){
            return true;
        }
    }
    return false;
}
int brute(vector <int> &stalls,int noofcows){
    int n=stalls.size();
    sort(stalls.begin(), stalls.end());
    // maximum distance  between two cows in the stall
    int limit=stalls[n-1]-stalls[0];
    for(int i=1;i<=limit;i++){
        if(cowspossible(stalls,i,noofcows)==false) {return( i-1);}
    }
    return limit;
}
int betterwithbinary(vector <int> &stalls,int noofcows){
    int n=stalls.size();
    sort(stalls.begin(), stalls.end());
    int low=1,high=stalls[n-1]-stalls[0];
    while(low <= high) {
        int mid=(low+high)/2;
        if(cowspossible(stalls,mid,noofcows)==true){
            low=mid+1; //find maximum
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int main() {
    vector<int> stalls = {1, 2, 3};
    int noofcows = 2;

    int maxDistance = brute(stalls, noofcows);

    cout << "The maximum possible distance is: " << maxDistance << "\n";

    return 0;
}
