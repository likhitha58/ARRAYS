#include<bits/stdc++.h>
using namespace std;
int longSubarray(vector<int>arr,long long k){
    int n=arr.size();
    int left=0;
    int right=0;
    int maxi=0;//var to find the max subarray length
    long long sum=arr[0];
    while(right<n){
        //1. if sum > k then shrink window
        while(left<=right && sum>k){
            sum=sum-arr[left];
            left++;
        }
        //2. if sum = k then find the max length of subarray
        if(sum==k){
            maxi=max(maxi,right-left+1);
        }
        //3. sum is not greater than k and not equal to k, so sum is less than k
        // expand window
        right++;
        if(right<n){
            sum=sum+arr[right];
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    int ans=longSubarray(arr,k);
    cout<<ans;
    return 0;
}