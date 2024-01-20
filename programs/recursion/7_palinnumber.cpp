#include <iostream>
using namespace std;
int reverseNumber(int num, int reversedNum = 0) {
    if (num == 0) {
        return reversedNum;
    }
    reversedNum = reversedNum * 10 + num % 10;
    return reverseNumber(num / 10, reversedNum);
}
bool isPalindrome(int num) {
    int reversedNum = reverseNumber(num);
    return (num == reversedNum);
}

int main() {
    int number = 12321;

    cout << "Original Number: " << number << endl;
    if (isPalindrome(number)) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}