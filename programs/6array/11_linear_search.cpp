#include <bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
       
    }
     return -1;

}
int main(){
    vector <int> a={1,3,4,5,6,7,8};
    cout<<linearSearch(a.size(), 16, a); //returns the index of element 6 in array a which is 5
}