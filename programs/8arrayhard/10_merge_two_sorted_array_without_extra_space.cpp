#include <iostream>
#include <vector>
using namespace std;

void brute(vector<long long> &a, vector<long long> &b) {
    int n = a.size();
    int m = b.size();
    vector<long long> c(n + m, 0);

    int left = 0;
    int right = 0;
    int i = 0;

    while (left < n && right < m) {
        if (a[left] < b[right]) {
            c[i] = a[left];
            left++, i++;
        } else {
            c[i] = b[right];
            right++, i++;
        }
    }

    while (left < n) {
        c[i++] = a[left++];
    }

    while (right < m) {
        c[i++] = b[right++];
    }

    for (int i = 0; i < n + m; i++) {
        if (i < n) {
            a[i] = c[i];
        } else {
            b[i - n] = c[i];
        }
    }
}
// with pusback functionality
// void brute(vector<long long> &a, vector<long long> &b) {
//     int n = a.size();
//     int m = b.size();
//     vector<vector<long long>> c(n + m, vector<long long>());

//     int left = 0;
//     int right = 0;
//     int i = 0;

//     while (left < n && right < m) {
//         if (a[left] < b[right]) {
//             c[i].push_back(a[left]);
//             left++, i++;
//         } else {
//             c[i].push_back(b[right]);
//             right++, i++;
//         }
//     }

//     while (left < n) {
//         c[i].push_back(a[left++]);
//         i++;
//     }

//     while (right < m) {
//         c[i].push_back(b[right++]);
//         i++;
//     }

//     for (int i = 0; i < n + m; i++) {
//         if (i < n) {
//             a[i] = c[i][0];
//         } else {
//             b[i - n] = c[i][0];
//         }
//     }
// }
void brute(vector<long long> &a, vector<long long> &b) {
    
}
int main() {
    vector<long long> a = {1, 4, 8, 10};
    vector<long long> b = {2, 3, 9};

    brute(a, b);

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
