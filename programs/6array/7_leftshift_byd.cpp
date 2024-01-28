#include <iostream>

using namespace std;
void shift(int a[],int n,int d){
    int temp[n];
    int k=0;
    // shifted values
    for(int i=d;i<n;i++){
        temp[k]=a[i];
        k++;
    }
    // values at last
    for(int i=0;i<d;i++){
        temp[k]=a[i];
        k++;
    }
    // value to array
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    
}
int main()
{
    int n;
    cout<<"enter len of array:";
    cin>>n;
    cout<<endl;
    int e;
    cout<<"enter value for left rotation";
    cin>>e;
    // if shift is 7 and there are 5 ele we need to make only 2 as after 5 it will be back at same pos
    // 7=n+2
    int d=e%n;
    cout<<endl;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\norg array";
    for (int i=0;i<n;i++){
        cout<<a[i];
    }
    
    shift(a,n,d);
    cout<<"\nafter\n";
     for (int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
