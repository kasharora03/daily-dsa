#include <bits/stdc++.h>
using namespace std;
void pairs(){
     // pairs
    pair <int,int> p={1,2};
    cout<<p.second<<endl;
    pair<int,int> a[]={{1,2},{3,4},{5,6}};
    cout<<a[2].first<<endl;
}
//vectors
void vectorsexp(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //more smarter
    // adding pair into vector
    vector <pair<int,int>> v1;
    //{{1,2},{3,4},{5,6}}
    v1.push_back({1,2});
    v1.emplace_back(1,2); //directly assume it as obj no need of{}
    // same value vector
    vector <int> v2(5,100); //5 index with value 100[100,100,100,100,100]
    vector <int> v3(5); //contains 5 0's or 5 garbage values
    //copying vector
    vector <int>v4(v2);
    // getting elements
    cout<<v[0]<<"or"<<v.at(0)<<endl;
    cout<<v.back();

}
void iteratorexp(){
    vector<int> v = {10,20,30,40,50};
    // vector<int>::iterator it = v.begin();
    // cout<<*(it)<<" "; 
    // //prints first element
    // it++;
    // cout<<*(it)<<" ";
    // //prints second element
    // it=it+3;
    // cout<<*(it)<<"\n";
    // //prints fift element coz value of it is at 20 ie 1th index
    //end
    // vector<int>::iterator it =v.end(); 
    // //this point to memory location next to lat element if we do it-- here then 50 will be printed
    // cout<<*(it)<<"\n";
    // //prints last element
    // it--;
    // cout<<*(it)<<"\n";
    //rend()
    //  vector<int>::reverse_iterator it = v.rend();
    // cout << *it << "\n"; 
    // // prints last element
    // it--;
    // cout << *it << "\n"; 
    // rbegin()
    vector<int>::reverse_iterator it = v.rbegin();
    cout<<*it<<endl;
    it--;
    cout<<*it<<endl;

}
void printvector(){
    vector<int> v = {10,20,30,40,50};
    // 1
    for(vector<int>::iterator it=v.begin();it!= v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // 2
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // foreachloop
    for(auto it:v){
        cout<<it<<" ";
    }
}
void deletion(){
    vector<int> v = {10,20,30,40,50};
    v.erase(v.begin());   
    for(auto it:v){
        cout<<it<<" ";
    }
}
void insertion(){
    vector<int> v = {10,20,30,40,50};
    v.insert(v.begin(),100);
    // add 100 at first position
    v.insert(v.begin()+3,200);
    for(auto it:v){
        cout<<it<<" ";
    }
}
// listsssssssssssssssssssssssssssssss
void listexp(){
    list <int> ls={1,2,3};
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(0);
    ls.emplace_front(4);
    for(auto it:ls){
        cout << it << " ";
    }
}
void stackexp(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    cout<<st.top()<<endl;
    cout<<"is the stack empty?"<<st.empty()<<endl;
    cout<<"size:"<<st.size()<<endl;
    // stack <int> st1({1,23,45});
    stack<int> s1=st;
    while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }
}
void queueexp(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    cout<<"front no:"<<q.front()<<endl;
    cout<<"last no:"<<q.back()<<endl;
    cout<<"Is the Queue Empty ?"<<q.empty()<<endl;
    cout<<"Size of the Queue :"<<q.size()<<endl;
    q.pop(); //deletes first item
    queue <int>temp=q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
}}
void pqexp(){
    // maximum heap:larget number at top
    priority_queue <int> pq;
    pq.push(8);
    pq.push(3);
    pq.push(10);
    pq.emplace(7);
    cout<<pq.top(); //gives 10 being highest number at top
    cout<<"Is it empty? "<<pq.empty()<<endl;
    cout<<"Size of PriorityQueue is :"<<pq.size()<<endl;
    pq.pop(); //deltes 10
// ----------------------------------------------------
// minimum heap smallest numer at top
priority_queue <int, vector<int>, greater<int>> pq1;
pq1.push(9);
pq1.push(5);
pq1.push(6);
pq1.push(2);
cout<<pq1.top()<<endl; //gives 2 as its the smallest
while(!pq1.empty()){
    cout<<pq1.top()<<" ";
    pq1.pop();
}
}
void setexp(){
    //unique and sorted
    set <int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2); //not executes
    s.insert(4);
    s.insert(3);
    // {1,2,3,4}
    auto it= s.find(8);
    cout<<*(it)<<endl;
}
void multisetexp(){
    //duplicate allowed
    multiset <int> ms = {1, 2, 3, 1, 1, 4, 5};
    ms.insert(1);
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(1);
    ms.insert(2);
    ms.insert(1);
    ms.erase(1); //remove all occurence of 1
    // ms.erase(ms.find(1));
    // ms.erase(ms.find(1), ms.find(1) + 2);
    for (auto it: ms){
        cout << it << " ";
    }
}
void mapexp(){
    map <int,int> mpp;
    mpp[1] = 0;
    mpp.insert({2,9});
    map <pair<int,int>,int> mpp1;
    mpp1[{1,0}] = 7;
    mpp1.emplace(std::make_pair(3, 4), 7);
    map <int,int> m1={{1,2},{2,3},{3,3},{4,5}};
    cout<<m1[3]<<endl;
    cout<<m1[9]<<endl;
    // finding
    for(auto it:m1){
        cout<<it.first<<"-"<<endl;
    }
    // using find method
    auto it = m1.find(3);
    cout<<it->second<<endl;

}
void sorting(){
    //  pair <int,int> a[]={{1,2},{2,3},{3,4},{4,5}};
    // //  ascending
    // sort(a,a+4);
    // int n = sizeof(a) / sizeof(a[0]);
    // sort(a,a+n, std::greater<std::pair<int, int>>() );
    // // vector sort
    vector <int> b={1,5,8,3,2};
    // int n = sizeof(b) / sizeof(b[0]);
    sort(b.begin(),b.end());
    for(auto it:b){
        cout<<it<<endl;
    }
}
 bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second<p2.second){
            return true;
        }
        else if(p1.second>p2.second){
            // same
            if(p1.first>p2.first){
                return true;
            }
            return false;
        }
    }
void conditionsort(){
   
    pair <int,int> a1[]={{1,2},{3,2},{4,1}};
    int n = sizeof(a1) / sizeof(a1[0]);
    sort(a1,a1+n,comp);
     for (int i = 0; i < n; i++) {
        cout << "(" << a1[i].first << ", " << a1[i].second << ") ";
    }
    // pair <int,int> p1={4,5};
    // pair <int,int> p2={4,6};
}
void popcount(){
    int num =7;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;
    long long b=165321011321;
    int cnt1=__builtin_popcount(b);
    cout<<cnt1;
}
void permutations(){
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    permutations();
      return 0;

}