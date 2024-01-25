#include <iostream>
using namespace std;
// getting n th number at fib series 
int f(int n){
    if(n<=1)
    return n;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}
// without recursion________________________________________
int main()
{
    int n;
    cin>>n;
    int n1=0;
    int n2=1;
    int n3;
    if(n==0){
        return 0;
    }
    if(n==1){
        return n1;
    }
    if(n>1){
        cout<<n1<<n2;
        for(int i=2;i<n;i++){
            n3=n1+n2;
            cout<<n3;
            int temp=n1;
            n1=n2;
            n2=n3;
        }
    }
    return 0;
}
