#include <iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(vector<int>a, int k) {
    vector <int> temp;
    int n=a.size();
    int d=k%n;
    int j=0;
    // adding to new temp
    for(int i=d;i<n;i++){
        temp.push_back(a[i]);
    }
    for(int i=0;i<d;i++){
        temp.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    return a;
}

int main()
{
    vector <int> v={1,2,3,4,5,6};
    int k;
    cout<<"enter places to shift";
    cin>>k;
    
    vector <int> a=rotateArray(v,k);
    for(auto it:a){
        cout<<it;
    }
    return 0;
}
