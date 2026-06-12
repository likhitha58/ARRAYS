#include<bits/stdc++.h>
using namespace std;
//Input: arr= [4,2,5,7]
//Output: [4,5,2,7]
vector<int>parityII(vector<int>arr){
    int posIdx=0;
    int negIdx=1;
    vector<int>ans(arr.size());
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            ans[posIdx]=arr[i];
            posIdx+=2;
        }else{
            ans[negIdx]=arr[i];
            negIdx+=2;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={4,2,5,7};
    vector<int>ans=parityII(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}