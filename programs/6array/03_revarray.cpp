#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter range";
    cin>>n;
    int a[n];
    cout<<"enter array values";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\norg array";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<"\nrev array:";
    // one way
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<"\another:";
    // second way
    for(int i=0;i<n;i++){
        cout<<a[n-i-1];
    }
}