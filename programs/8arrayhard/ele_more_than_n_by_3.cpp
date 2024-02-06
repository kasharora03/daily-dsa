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
vector<int> majorityElement(vector<int> a) {
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
int main()
{
    vector<int> a = {1, 1, 1, 2, 2, 3, 3, 3};
    set<int> res = brute(a);
    for (auto i : res)
    {
        cout << i << " ";
    }
}