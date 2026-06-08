#include<bits/stdc++.h>
using namespace std;
//original: [1,2,3,4,5]
//k=2;
//after:    [3,4,5,1,2]
vector<int>leftRotByK(vector<int>&arr,int k){
    k=k%arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>ans=leftRotByK(arr,2);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}