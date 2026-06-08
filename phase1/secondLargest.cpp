#include<bits/stdc++.h>
using namespace std;
vector<int> secondLargest(vector<int>&arr){
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    if(slargest==INT_MIN){
        return {-1};
    }
    return {largest,slargest};
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<int>ans=secondLargest(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}