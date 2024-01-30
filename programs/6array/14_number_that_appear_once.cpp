#include <bits/stdc++.h>
using namespace std;
int brute(int a[],int n){
    // tc= n square
     for(int i=0;i<n;i++){
        int num=a[i];
        int cnt =0;
        for(int j=0;j<n;j++){
            if(a[j]==num){
                cnt++;
            }
            
        }
        if(cnt==1)
            return num;
     }
     return -1;
}
int better(int a[],int n){
    // o(3n)
    int maxi=a[0];
    // o(n)
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int hash[maxi+1]={0};
    // o(n)
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    // goes till o(n)
    for(int i=0;i<n;i++){
        if(hash[a[i]]==1){
            return a[i];
        }
    }
    return  -1;
}

// hash cannot be used evry time with number 10^7 greater or neg
// so map is used coz it only strores key and value not full range
int better2(int a[],int n){
    // n(array length)log m(size of map)
    // best o(n)
    // unordered map increaes tc
    map <int , int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second ==1){
            return  it.first;
        }
    }
    return -1;
}
int optimal(int a[],int n){
    // using xor and this can be used when others occur twice and only one number appear 1 time as 
    // thers will make pair and give 0
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1 = xor1 ^ a[i];
        }
        // now we have to find the element which gives 0 after XOR operation
        return xor1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        }
        cout<<"res";
    cout<<brute(a,n)<<endl;
    cout<<better(a,n)<<endl;
    cout<<better2(a,n)<<endl;;
    cout<<optimal(a,n);
	return 0;
}