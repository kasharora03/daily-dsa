#include <iostream>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        cout<<"res="<<res<<endl;
        res = res / (i + 1);
        cout<<"after res="<<res<<endl;
    }
    return res;
}
void pascalTriangle(int n) {
    // till n because all row has n ele 5th has 5, 1 has 1
    for (int c = 1; c <= n; c++) {
        cout << nCr(n - 1, c - 1) << " ";
    }
    cout << "\n";
}

int main()
{
    int n = 5;
    pascalTriangle(n);
    return 0;
}