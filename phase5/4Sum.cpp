#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>foursum(vector<int>arr,int target){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    int n=arr.size();
    for(int i=0;i<n-3;i++){
        if(i<n && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<n-2;j++){
            if(j<i+1 && arr[j]==arr[j-1]){
                continue;
            }
            int left=j+1;
            int right=n-1;
            while(left<right){
                long long sum=(long long)arr[i]+arr[j]+arr[left]+arr[right];
                if(sum==target){
                    ans.push_back({arr[i],arr[j],arr[left],arr[right]});
                    left++;
                    right--;
                    while(left<right && arr[left]==arr[left-1]){
                        left++;
                    }
                    while(left<right && arr[right]==arr[right+1]){
                        right--;
                    }
                }else if(sum<target){
                    left++;
                }else{
                    right--;
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>>ans=foursum(arr,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}