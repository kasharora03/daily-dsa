#include <bits/stdc++.h>
using namespace std;

// brute force 
// 1.generate all in ascending order
// 2.do linear search for item  for which we need to find next permutation
// 3. find next permutation
// 4.if no next premutation exist that is we enterred last like 321 so first will be returned that is 123
// tc=3! ie n factorial
// see recursion for permuation 
vector<int> better(vector<int> &a) {
    // using STL
    if (next_permutation(a.begin(), a.end())) {
        return a;
    } else {
        // No more permutations, 'a' is now the lexicographically smallest permutation.
        return a; // or handle this case as needed
    }
}
vector <int>optimal(vector<int> &a){
    // 215430
    int ind=-1;
    int n=a.size();
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            ind=i;
            break;
        }
    }
    if (ind==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>ind;i--){
        // 215430   3<1 235410  230145
        if(a[i]>a[ind]){
            swap(a[i],a[ind]);
            break;
        }
    }
    reverse(a.begin()+ind+1,a.end());
    return a;

}
int main() {
    // tc=0(3n) 2 for loop 1 reverse
    vector<int> a = {2,1,5,4,3,0};
    cout << "bettermethod\n";
    vector<int> bettersol = optimal(a);
    for (auto it : bettersol) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}