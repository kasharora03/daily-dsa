#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
string reverseString(string &str) {
    stack<string> s;
    int n = str.length();
    string reversedString = "";

    for (int i = 0; i < n; i++) {
        string word = "";
        while (i < n && str[i] != ' ') {
            word += str[i++];
        }
        if (!word.empty()) {
            s.push(word);
        }
    }

    while (!s.empty()) {
        reversedString += s.top();
        s.pop();
        if (!s.empty()) {
            reversedString += " ";
        }
    }

    return reversedString;
}
int main(){
    string s="Hello this is String";
    cout<<reverseString(s)<<endl;
    return 0;
}