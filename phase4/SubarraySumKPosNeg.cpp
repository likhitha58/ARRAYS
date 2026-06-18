#include<bits/stdc++.h>
using namespace std;

int subArray(vector<int>arr,int k){
    unordered_map<int,int>mp;
    int count=0, sum=0;
    mp[0]=1;
    for(int num:arr){
        sum+=num;
        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
}

int main(){
    vector<int>arr={1,2,3};
    int k=3;
    int ans=subArray(arr,k);
    cout<<ans;
    return 0;
}