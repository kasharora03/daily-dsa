#include <iostream>
#include<vector>
using namespace std;
// int fib(int n, vector<int>& memo) {
//     if (n <= 1) {
//         return n;
//     }

//     if (memo[n] != -1) {
//         return memo[n];
//     }
//     memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
//     return memo[n];
// }
// vector<int> generateFibonacciNumbers(int n) {
//     vector<int> v;
//     if (n <= 0) {
//         return v;
//     }
//     vector<int> memo(n + 1, -1);
//     for (int i = 0; i < n; ++i) {
//         v.push_back(fib(i, memo));
//     }

//     return v;
// }
int fib(int n){
    if(n<=1){
        return n;
    }
    int last=fib(n-1);
    int slast=fib(n-2);
    return last+slast;
}
vector<int> generateFibonacciNumbers(int n) {
    vector <int> v;
    if(n<=0){
        return v;
    }
    for(int i=0;i<n;i++){
        int s=fib(i);
        v.push_back(s);
    }
    return v;

}
int main(){
    vector <int> a =generateFibonacciNumbers(6);
    for(auto it: a){
        cout<<it;
    }
}