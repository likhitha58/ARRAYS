#include<bits/stdc++.h>
using namespace std;
//arr =[3,1,-2,-5,2,-4]
//Output: [3,-2,1,-5,2,-4]
vector<int>elementsSign(vector<int>arr){
    int posIdx=0;
    int negIdx=1;
    vector<int>ans(arr.size());
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
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
    vector<int>arr={3,-1,-2,4,5,-9};
    vector<int>ans=elementsSign(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}