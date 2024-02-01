#include<bits/stdc++.h>
using namespace std;
void rshift(int a[],int n,int d){
    int temp[n];
    int k = 0;
    // n=5
    // 12345
    // d=3 
    // 34512
    for (int i = n - d; i < n; i++) {
        temp[k] = a[i];
        // cout<<temp[k]<<endl;
        k++;
    }
    
    for (int i = 0; i < n - d; i++) {
        temp[k] = a[i];
        k++;
    }
    
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
    
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int d;
    
    cout << "Enter places to shift: ";
    cin >> d;
    
    d = d % n;
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    rshift(a,n,d);
    cout << "\nAfter shift: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
