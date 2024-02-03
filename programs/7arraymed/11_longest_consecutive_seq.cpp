// to find consecutive seq like 1,2,3,4 (4) and 100,101,102(3) from 10,100,1,23,2,13,4,3,101,102
#include <bits/stdc++.h>
using namespace std;
// brute
bool linearsearch(vector <int> a,int num){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(num==a[i]) return true;
    }
    return false;
}
int brute(vector <int> a){
    int n=a.size();
    int longest =1;
    for(int i=0;i<n;i++){
        int cnt=1;
        int x=a[i];
        while(linearsearch(a,x+1)==true){
            x=x+1;
            cnt=cnt+1;
        }
        longest=max(longest,cnt);
    }
    return  longest;
}
int better(vector <int> a){
    if (a.size()==0)
    return 0;
    sort(a.begin(),a.end());
    int n=a.size();
    int lastsmaller=INT_MIN;
    int cnt=0;
    int longest=-1;
    for(int i=0;i<n;i++){
        if(a[i]-1==lastsmaller){
            cnt++;
            lastsmaller=a[i];
        }
        else if(lastsmaller!=a[i]){
            cnt=1;
            lastsmaller=a[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int optimal(vector<int> a){
    // put everything to unordered set
    int n = a.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        // if end me aagya means ele is not present this means previous ele is not there 
        // current one is starting point of series like 1 in 1,2,3,4
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            // till next element is there in set
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

}
int main()
{
    vector<int> a = {100,101, 200, 102, 2, 103, 104};
    int ans = brute(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    int ans2=better(a);
    cout<<"The Longest Consecutive Subsequence in Better Approach is "<<ans2<<"\n";
    return 0;
}