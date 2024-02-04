#include <bits/stdc++.h>
using namespace std;

void leftrr(int a[], int n, int d)
{
    reverse(a, a + d);
    reverse(a + d, a + n);
    reverse(a, a + n);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    d = d % n;

    leftrr(a, n, d);

    // Fix the loop condition
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
