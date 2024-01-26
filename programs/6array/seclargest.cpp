#include<iostream>
#include<climits>
using namespace std;

    int secondlargest(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    int second=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=largest)
        second=max(second,arr[i]);
    };
    return second;
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    cout<<secondlargest(arr,n);
    return 0;
}
// way 2
// #include <iostream>
// using namespace std;

// int main() {
//     int a[5] = {1, 4, 3, 16, 9};
//     int max = 0;

//     // Find the index of the maximum element
//     for (int i = 0; i < 5; i++) {
//         if (a[i] > a[max]) {
//             max = i;
//         }
//     }

//     // Output the maximum element
//     cout << "Maximum Element: " << a[max] << endl;

//     // int s = (max == 0) ? 1 : 0;
//     int s=0;

//     // Find the second largest element
//     for (int i = 0; i < 5; i++) {
//         if (i != max && a[i] > a[s]) {
//             s = i;
//         }
//     }

//     // Output the second largest element
//     cout << "Second Largest Element: " << a[s] << endl;

//     return 0;
// }
