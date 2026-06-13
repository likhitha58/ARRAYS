#include<bits/stdc++.h>
using namespace std;
//1.find the element smaller than the right most element (breakout point)
//2.if brkout exists, find the element slightly larger than the found element from the right
//3.swap these two elements
//4.reverse the array from the breakout point
vector<int>nextPerm(vector<int>&arr){
    int n=arr.size();
    int index=-1;
    //step 1
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    //step 2
    if(index!=-1){
        for(int j=n-1;j>index;j--){
            if(arr[j]>arr[index]){
                swap(arr[j],arr[index]); //step 3;
                break;
            }
        }
    }
    //step 4
    reverse(arr.begin()+index+1,arr.end());
    return arr;
}
int main(){
    vector<int>arr={3, 4, 2, 5, 1};
    vector<int>ans=nextPerm(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}