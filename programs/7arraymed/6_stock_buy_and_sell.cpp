#include<bits/stdc++.h>
using namespace std;
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int mini=prices[0];
    int maxprofit=0;
    int n=prices.size();
    for(int i=1;i<n;i++){
        int cost=prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);
    }
    return maxprofit;
}
int main(){
    vector <int>price={1,2,3,4,5,6,7};
    cout<<"Maximum Profit You Can Get From Buying And Selling A Stock = "<<bestTimeToBuyAndSellStock(price)<<endl;
}