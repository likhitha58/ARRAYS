#include<bits/stdc++.h>
using namespace std;
vector<int> secondSmallest(vector<int>&arr){
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]<ssmallest && arr[i]!=smallest){
            ssmallest=arr[i];
        }
    }
    if(ssmallest==INT_MAX){
        return {-1};
    }
    return {smallest,ssmallest};
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<int>ans=secondSmallest(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}