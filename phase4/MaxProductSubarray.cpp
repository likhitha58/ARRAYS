#include<bits/stdc++.h>
using namespace std;

int maxProd(vector<int>&arr){
    int maxProd=arr[0];
    int minProd=arr[0];
    int ans=arr[0];

    for(int i=1;i<arr.size();i++){
        if(arr[i]<0){
            swap(maxProd,minProd);
        }

        maxProd=max(maxProd,arr[i]*maxProd);
        minProd=min(minProd,arr[i]*minProd);
        ans=max(maxProd,ans);
    }
    return ans;
}

int main(){
    vector<int>arr={1,-2,4,-6};
    int ans=maxProd(arr);
    cout<<ans;
    return 0;
}