#include<bits/stdc++.h>
using namespace std;
// Input: arr = [3,1,2,4]
// Output: [2,4,3,1] or [4,2,3,1], [2,4,1,3], and [4,2,1,3]
vector<int>parity(vector<int>arr){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        if(arr[left]%2==0){
            left++;
        }else if(arr[right]%2==1){
            right--;
        }else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={3,1,2,4};
    vector<int>ans=parity(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}