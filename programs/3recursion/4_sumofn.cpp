#include <bits/stdc++.h>
using namespace std;
long long sumFirstN(long long n) {
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
// using recursion_______________________________
int ans = 0;
int sumFirstN(int n)
{
    if (n == 0)
    {
        return ans;
    }
    ans = ans + n;
    sumFirstN(n - 1);
    return ans;
}
// parameterized way_________________________________
int psum = 0;
int f(int i, int psum)
{
    if (i < 1)
    {
        return psum;
    }
    return f(i - 1, psum + i);
}
// functional way___________________________
int ans1 = 0;
int f1(int n)
{
    if (n == 0)
    {
        return ans1;
    }
    return n + f1(n - 1);
}
int main()
{
    cout << sumFirstN(5);
    cout << endl;
    cout << f(5, 0);
    cout << endl;
    cout << f1(5);
    return 0;
}