// to print all resultant factorial till given number
#include <iostream>
#include <vector>
using namespace std;
int fact(int c){
    if(c==0) return 1;
    return c*fact(c-1);
}
vector<int> factorialNumbers(int n) {
    vector<int> v;
    int i=1;
    int f;
    f=fact(i);
    while(f<=n){
        v.push_back(f);
        i++;
        f=fact(i);
    }
    return v;
}
int main(){
    vector <int> a =factorialNumbers(7);
    for(auto it: a){
        cout<<it<<" ";
    }
}