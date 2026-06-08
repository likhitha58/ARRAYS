#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,0,3,4,5};
    int target=7;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        int rem=target-arr[i];
        if(mp.find(rem)!=mp.end()){
            cout << mp[rem] << " " << i << endl;
            return 0;
        }
        mp[arr[i]]=i;
    }
    return 0;
}