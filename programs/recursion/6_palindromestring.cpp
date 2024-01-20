#include<iostream>
using namespace std;
bool check(string str,int i,int j){
    if(i>=j)
    return true;
    if(str[i]!=str[j])
    return false;
    return check(str,i+1,j-1);
}
bool isPalindrome(string str) {
    int i=0;
    int j=str.size()-1;
    return check(str,i,j);
}
int main() {
    bool a=isPalindrome("aba");
    cout<<a;
  return 0;
}