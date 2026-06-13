#include<bits/stdc++.h>
using namespace std;
// Input: arr = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]
// Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.

vector<int>leadersArray(vector<int>arr){
    int m=arr.size();
    int maxRight=arr[m-1];
    vector<int>ans;
    ans.push_back(maxRight);//rightmost element is a leader
    for(int i=m-2;i>=0;i--){
        if(arr[i]>=maxRight){
            ans.push_back(arr[i]);
            maxRight=arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>arr={10, 4, 2, 4, 1};
    vector<int>ans=leadersArray(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}