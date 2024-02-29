#include <bits/stdc++.h>
using namespace std;
double brute(vector<int>& a, vector<int>& b) {
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
double better(vector<int>& a, vector<int>& b) {
    int n1 = a.size(), n2 = b.size();
    int n = n1 + n2; //total size
    //required indices for median
    int ind2 = n / 2;
    int ind1 = ind2 - 1;
    // initial
    int cnt = 0;
    int ind1element = -1, ind2element = -1;
    // merging two arrays
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (cnt == ind1) ind1element = a[i];
            if (cnt == ind2) ind2element = a[i];
            cnt++;
            i++;
        }
        else {
            if (cnt == ind1) ind1element = b[j];
            if (cnt == ind2) ind2element = b[j];
            cnt++;
            j++;
        }
    }

    //copy the left-out elements:
    while (i < n1) {
        if (cnt == ind1) ind1element = a[i];
        if (cnt == ind2) ind2element = a[i];
        cnt++;
        i++;
    }
    while (j < n2) {
        if (cnt == ind1) ind1element = b[j];
        if (cnt == ind2) ind2element = b[j];
        cnt++;
        j++;
    }

    //Find the median:
    if (n % 2 == 1) {
        return (double)ind2element;
    }

    return (double)((double)(ind1element + ind2element)) / 2.0;
}