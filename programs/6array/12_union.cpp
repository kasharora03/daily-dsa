#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // set <int> s;
    // vector <int> un;
    // for(int i=0;i<a.size();i++){
    //     s.insert(a[i]);
    // }
    // for(int i=0;i<b.size();i++){
    //     s.insert(b[i]);
    // }
    // for(auto it:s){
    //     un.push_back(it);
    // }
    // return un;

    // way 2
    // set<int> unionSet(a.begin(), a.end());

    // unionSet.insert(b.begin(), b.end());

    // return vector<int>(unionSet.begin(), unionSet.end());

    // way 3
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> UnArr;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (UnArr.size() == 0 || UnArr.back() != a[i])
            {
                UnArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (UnArr.size() == 0 || UnArr.back() != b[j])
            {
                UnArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (UnArr.size() == 0 || UnArr.back() != a[i])
        {
            UnArr.push_back(a[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (UnArr.size() == 0 || UnArr.back() != b[j])
        { // Fix here: compare with b[j] instead of a[j]
            UnArr.push_back(b[j]);
        }
        j++;
    }

    return UnArr;
}
int main()
{
    vector<int> A = {1, 2, 3, 3, 4, 5};
    vector<int> B = {2, 4, 6, 8};
    vector<int> C = sortedArray(A, B);
    for (auto x : C)
    {
        cout << x << " ";
    }
    return 0;
}