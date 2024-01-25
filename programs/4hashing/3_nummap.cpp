 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cout<<"enter no of elemnts for array";
    cin>>n;
     int arr[n];
    cout<<endl;
    cout<<"enter elements for array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precompute
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cout<<"\nenter no of ele to be searched:";
    cin>>q;
    int n1=0;
    while(n1<q){
        cout<<"\nenter ele to be searched:";
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
        n1++;
    }
    return 0;
 }