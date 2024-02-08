#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r) { //42
    long long res = 1;

    // calculating nCr(combination)
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int pascalTriangle(int r, int c) {
    // we need to find factorial of previous row and col
    int element = nCr(r - 1, c - 1);
    return element;
}
int main()
{
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout <<element;
    return 0;
}