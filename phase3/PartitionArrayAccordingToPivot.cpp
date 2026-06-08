#include<bits/stdc++.h>
using namespace std;
vector<int>partitionPivot(vector<int>arr,int pivot){
    vector<int>less;
    vector<int>eq;
    vector<int>grt;
    for(int num:arr){
        if(num<pivot){
            less.push_back(num);
        }else if(num==pivot){
            eq.push_back(num);
        }else{
            grt.push_back(num);
        }
    }
    vector<int>res;
    res.insert(res.end(),less.begin(),less.end());
    res.insert(res.end(),eq.begin(),eq.end());
    res.insert(res.end(),grt.begin(),grt.end());
    return res;
}
int main(){
    vector<int>arr={1,3,2,9,5,4,6};
    int pivot=5;
    vector<int>ans=partitionPivot(arr,pivot);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}