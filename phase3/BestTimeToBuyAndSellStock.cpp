#include<bits/stdc++.h>
using namespace std;
int buyAndSell(vector<int>&arr){
    int minPrice=arr[0];
    int maxProfit=0;
    for(int i=1;i<arr.size();i++){
        int profit=arr[i]-minPrice;
        minPrice=min(minPrice,arr[i]);
        maxProfit=max(maxProfit,profit);
    }
    return maxProfit;
}
int main(){
    vector<int>arr={3,8,2,5,1,7};
    int ans=buyAndSell(arr);
    cout<<ans;
    return 0;
}