// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    int three =a+b;
    return three;
}
int main(){
    //finding adult
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age>=18) {
        cout<<"Adult";
        }
    else{
         cout<<"not an Adult";
         }
    // next  ques
    cout<<endl;
    int marks;
    cout<<"Enter Marks:";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if (marks<=44){
        // else if (marks>=25 && marks<=44)
        // we dont need to mention both less than and greater than because if <25 if false then on ly it enter next condition
        cout<<"E";
    }
    else if (marks<=49){
        // else if (marks>=45 && marks<=49)
        cout<<"D";
    }
    else if ( marks<=59){
        cout<<"C";
    }
    else if (marks<=79){
        cout<<"B";
    }
    else if (marks<=100){
        cout<<"A";
    }
    cout<< sum(9,4);
    return 0;
}