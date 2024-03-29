#include <bits/stdc++.h>
using namespace std;
int countStudents(vector<int>& books, int pages) {
    int n=books.size();
    int students=1;
    long long pagesperstu=0;
    for(int i=0;i<n;i++){
         if (pagesperstu + books[i] <= pages) {
        pagesperstu=pagesperstu+books[i];
         }
          else{
        students++;
        pagesperstu=books[i];
    }
    }
   return students;
}
int brute(vector<int> &books,int n,int students){
    if(students>n){
        return -1;
    }
    int low=*max_element(books.begin(),books.end());
    int high= accumulate(books.begin(), books.end(), 0);
    for(int pages=low;pages<=high;pages++){
        if(countStudents(books,pages)==students){
            return pages;
        }
    }
    return low;
}
int binary(vector<int>& arr, int n, int m) {
    //book allocation impossible:
    if (m > n) return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int students = countStudents(arr, mid);
        if (students > m) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = brute(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}