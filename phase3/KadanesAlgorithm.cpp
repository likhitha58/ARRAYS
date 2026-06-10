#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>arr){
    int currentCount=0;
    int maxCount=INT_MIN;
    for(int i=0;i<arr.size();i++){
        currentCount+=arr[i];
        maxCount=max(maxCount,currentCount);
        if(currentCount<0){
            currentCount=0;
        }
    }
    return maxCount;
}
int main(){
    vector<int>arr={1,-1,2,4,-4,8,-3};
    int ans=maxSubarray(arr);
    cout<<ans;
    return 0;
}