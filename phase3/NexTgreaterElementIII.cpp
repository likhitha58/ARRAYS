#include<bits/stdc++.h>
using namespace std;
//Example 1:
// Input: n = 12
// Output: 21
// Example 2:
// Input: n = 21
// Output: -1
int nextGreater(int n){
    string nums=to_string(n);
    int index=-1;
    int m=nums.size();
    for(int i=m-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        return -1;
    }
    if(index!=-1){
        for(int j=m-1;j>index;j--){
            if(nums[j]>nums[index]){
                swap(nums[j],nums[index]);
                break;
            }
        }
    }
    reverse(nums.begin()+index+1,nums.end());
    long long ans=stoll(nums);
    return (ans>INT_MAX)?-1:ans;
}
int main(){
    int n=8979;
    int ans=nextGreater(n);
    cout<<ans;
    return 0;
}