#include <bits/stdc++.h>
using namespace std;
// void insertionSort(int a[], int n)
// {
//     for(int i=0;i<n;i++){
//         int temp=a[i];
//         int j=i-1;
//         while(j>=0 && a[j]>temp){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;
//     }
// }
// using for loop
//      1   5   8   4
void insertionSort(int a[], int n)
{
    for(int i=0;i<n;i++){
        int temp=a[i]; //8
        // if i = 
        int j=i-1;  //1
        for(;j>=0;j--){             
            if(a[j]>temp){          
                // shift
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        // valur for which we are searching pos
        a[j+1]=temp;
    }
}
// recursive
void recu_sort(int arr[], int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    recu_sort(arr, i + 1, n);
}
int main(){
     int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter"<<i<<"number:";
        cin>>a[i];
    }
    insertionSort(a,n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}