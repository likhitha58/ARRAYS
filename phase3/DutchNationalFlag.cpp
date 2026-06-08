#include<bits/stdc++.h>
using namespace std;

vector<int>DNF(vector<int>arr){
    int low=0,mid=0;
    int high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={1,2,0,1,0,2,2,1,1,1,0};
    vector<int>ans=DNF(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}
