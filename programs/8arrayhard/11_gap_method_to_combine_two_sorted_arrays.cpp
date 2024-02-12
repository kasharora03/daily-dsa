#include <iostream>
#include <vector>

using namespace std;

void swapIfGreater(vector<long long>& arr1, vector<long long>& arr2, int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}

void merge(vector<long long>& arr1, vector<long long>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    int len = n + m;
    int gap = (len / 2) + (len % 2);//in case of odd add modulo ans like 9/2 4.5 it takes 4 and 9%2=1 so 4+1=5

    while (gap > 0) {
        int left = 0;
        int right = left + gap;
        while (right < len) {
             // left in a right in b
            if (left < n && right >= n) {
                swapIfGreater(arr1, arr2, left, right - n);
                //kyuki b array m right suppose index 1 p h so right(total value)-n =right ind in b
                // ex left =0 gap=5 and n =5 so right will be at b[0] to calculate this right -n
            } else if (left >= n) {
                // left and right both in b array
                swapIfGreater(arr2, arr2, left - n, right - n);
            } else {
                // both in a array
                swapIfGreater(arr1, arr1, left, right);
            }
            left++, right++;
        }
        if (gap == 1) break;
        gap = (gap / 2) + (gap % 2);
    }
}

int main() {
    vector<long long> a = {1, 4, 8, 10};
    vector<long long> b = {2, 3, 9};

    merge(a, b);

    cout << "The merged vectors are: " << "\n";
    cout << "a[] = ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\nb[] = ";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
