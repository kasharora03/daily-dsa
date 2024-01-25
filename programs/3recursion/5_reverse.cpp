#include <iostream>
#include<vector>
using namespace std;
void swap(int i,int j, vector<int> &nums){
    if(i>=j)
    return;
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    swap(i+1,j-1,nums);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    int i=0;
    int j=n-1;
    swap(i,j,nums);
    return nums;
}
int main()
{
    vector<int> v={1,2,3,4,5};
    vector <int> a=reverseArray(v.size(),v);
    for(auto it: a){
        cout<<it;
    }

    return 0;
}
