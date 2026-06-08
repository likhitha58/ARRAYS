#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>arr){
    int count=0;
    int candidate=0;
    for(int num:arr){
        if(count==0){
            candidate=num;
        }
        if(num==candidate){
            count++;
        }else{
            count--;
        }
    }
    return candidate;
}
int main(){
    vector<int>arr={1,3,4,4,4,4,3,3,1,1,1,3,1,1,4};
    int ans=majorityElement(arr);
    cout<<ans;
}