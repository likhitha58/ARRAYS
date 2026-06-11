#include<bits/stdc++.h>
using namespace std;
int buyAndSell(vector<int>arr){
    int totalProf=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1]){
            totalProf+=arr[i]-arr[i-1];
        }
    }
    return totalProf;
}
int main(){
    vector<int>arr={100,180,260,310,40,535,695};
    int ans=buyAndSell(arr);
    cout<<ans;
    return 0;
}