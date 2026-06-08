#include<bits/stdc++.h>
using namespace std;
int maxNum(vector<int>&arr){
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    vector<int>arr={1,2,3,4};
    int res=maxNum(arr);
    cout<<res;
    return 0;
}