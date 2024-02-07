#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
set<int> brute(vector<int> a)
{
    set <int> s;
    int n = a.size();
    
    for (int i = 0; i < a.size(); i++)
    {
        int cnt=0;
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cnt++;
            }
        }
        if(cnt>n/3){
            s.insert(a[i]);
        }
    }
    return s;
}
vector<int> better(vector<int> a) {
	vector<int> result;
    int n = a.size();
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    for (auto it : mp) {
        if (it.second > (n / 3)) {
            result.push_back(it.first);
        }
    }

    return result;
}
vector<int> optimal(vector<int> a) {
    int n = a.size();
    int count1=0,count2=0;
    int ele=INT_MIN;
    int ele2=INT_MIN;
    for(int i=0;i<n;i++){
        if(count1==0 && ele2 !=a[i]){
            count1=1;
            ele=a[i];
        }
        else if(count2==0 && ele !=a[i]){
            count2=1;
            ele2=a[i];
        }
        else if(a[i]==ele)
        count1++;
        else if(a[i]==ele2)
        count2++;
        else{
            count1--;
            count2--;
        }
    }
    vector<int> v;
    int cntele=0;int cntele2=0;
    for(int i=0;i<n;i++){
        if(ele==a[i]){
        cntele++;
        }
        if(ele2==a[i]){
        cntele2++;
        }
    }
    if(cntele>n/3){
        v.push_back(ele);
    }
    if(cntele2>n/3){
        v.push_back(ele2);
    }
    return v;
}
int main()
{
    vector<int> a = {1, 1, 1, 2, 2, 3, 3, 3};
    vector<int> res =optimal(a);
    for (auto i : res)
    {
        cout << i << " ";
    }
}