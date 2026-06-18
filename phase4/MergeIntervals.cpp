#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>mergeIntervals(vector<vector<int>>&intervals){
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    ans.push_back(intervals[0]);

    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=ans.back()[1]){
            ans.back()[1]=(max(intervals[i][1],ans.back()[1]));
        }else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>ans=mergeIntervals(intervals);
    int n=ans.size();
    int m=ans[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}