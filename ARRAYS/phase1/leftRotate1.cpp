#include<bits/stdc++.h>
using namespace std;
//original: [1,2,3,4,5]
//after:    [2,3,4,5,1]
vector<int>leftRot(vector<int>&arr){
    int temp=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
    return arr;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>ans=leftRot(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}