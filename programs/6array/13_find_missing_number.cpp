#include <iostream>
int brutemethod(int arr[], int n) {
    int i;
    for (i = 1; i <= n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
    return i;
}
int better(int a[], int n) {
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        hash[a[i]] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0)
            return i;
    }
    return n + 1; // return n + 1 if all numbers from 1 to n are present
}
int optimal(int a[], int n){
    // using xor
    int xor1=0;
    // for 1 to numbers
    for(int i=1;i<=n;i++){
        xor1^=i;
    }
    int xor2=0;
    // for numbers in array
    for(int i=0;i<n;i++){
        xor2^=a[i];
    }
    // find the missing number which is xor of [1,n] and [numbers in
    return xor1^xor2;
}
int main() {
    // int n;
    // std::cin >> n;
    int a[5] = {1, 2,3, 4};

    // int length = sizeof(a) / sizeof(a[0]);

    std::cout << brutemethod(a,5) << std::endl;
    std::cout << better(a, 5) << std::endl;
    std::cout << optimal(a, 5 ) << std::endl;

    return 0;
}
