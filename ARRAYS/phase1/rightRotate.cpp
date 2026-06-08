#include<bits/stdc++.h>
using namespace std;
//original: [1,2,3,4,5]
//after:    [5,1,2,3,4]
vector<int>rightRot(vector<int>&arr){
    int temp=arr[arr.size()-1];
    for(int i=arr.size()-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    return arr;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>ans=rightRot(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}