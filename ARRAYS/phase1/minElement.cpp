#include<bits/stdc++.h>
using namespace std;
int minElement(vector<int>&arr){
    int min=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    vector<int>arr={1,2,3,4};
    int res=minElement(arr);
    cout<<res;
    return 0;
}