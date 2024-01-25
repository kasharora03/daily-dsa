#include <bits/stdc++.h>
using namespace std;
void step(int src,int destination){
    cout<<"steps="<<src<<"dest ="<<destination<<endl;
    if(src==destination)
    return;
    
    src++;
    step(src,destination);
}
int main(){
    int destination =10;
    int src=0;
    step(src,destination);
    return 0;
}