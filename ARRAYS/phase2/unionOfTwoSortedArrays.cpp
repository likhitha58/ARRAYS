#include<bits/s
tdc++.h>
using namespace std;
vector<int>unionOfTwoSorted(vector<int>&a,vector<int>&b){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){
            if(ans.empty()||ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }else{
            if(ans.empty()||ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<a.size()){
        if(ans.empty()||ans.back()!=a[i]){
            ans.push_back(a[i]);
        }
        i++;
    }
    while(j<b.size()){
        if(ans.empty()||ans.back()!=b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}
int main(){
    vector<int>a={1,1,2,3,4};
    vector<int>b={2,3,4,4,5};
    vector<int>ans=unionOfTwoSorted(a,b);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}