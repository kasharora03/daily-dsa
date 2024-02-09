#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> brute(int n,vector<int> &nums){
    // tc=O(N3) sc=2*o(number of triplets)
    // using extra set space
    set <vector<int>> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
vector<vector<int>> better(int n,vector<int> &nums){
    // tc= n2*log(hash  set size)
    set <vector<int> > s;// to store unique triplet
    for(int i=0;i<n;i++){
        set <int> hashset;
        for(int j=i+1;j<n;j++){
            int third=-(nums[i]+nums[j]);
            if(hashset.find(third)!=hashset.end()){
                vector <int> temp={nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                s.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
vector <vector<int>> optimal(int n,vector <int> &nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector <int> temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]== nums[j-1])
                j++;
                while(j<k && nums[k]== nums[k+1])
                k--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> num={1,1,-2,-1,-1,-4,0,2};
    vector<vector<int>>ans=better(num.size(),num);
    for(auto row:ans){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}