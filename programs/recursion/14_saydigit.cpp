#include <bits/stdc++.h>
using namespace std;
void print(int n,string a[]){
    if (n==0)
    return;
    int digit = n%10;
    print(n/10,a);
    cout<<a[digit]<<" ";
}
int main() {
    int n;
    string a[10]={"zer0","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    print(n,a);
}
