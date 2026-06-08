#include<bits/stdc++.h>
using namespace std;
vector<int>moveZeroesEnd(vector<int>&arr){
    int i=0;
    for(int j=0;j<arr.size();j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={0,1,0,2,0,3};
    vector<int>ans=moveZeroesEnd(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}