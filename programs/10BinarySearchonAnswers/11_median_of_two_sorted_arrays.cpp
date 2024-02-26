#include <bits/stdc++.h>
using namespace std;
double median(vector<int>& a, vector<int>& b) {
    vector <int> c;
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }

    while (i < n) {
        c.push_back(a[i++]);
    }

    while (j < m) {
        c.push_back(b[j++]);
    }

    int total = (n + m);
    if (total % 2 == 1) {
        return c[total / 2];
    }

    double median = ((double)c[total / 2] + (double)c[(total / 2) - 1]) / 2.0;
    return median;
}