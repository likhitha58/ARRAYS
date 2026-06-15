#include<bits/stdc++.h>
using namespace std;
vector<int>spiralMatrix(vector<vector<int>>&matrix){
    int n=matrix.size();  //row number
    int m=matrix[0].size(); //col number

    vector<int>ans; //to store traversed elements

    //boundaries left-right -> top-bottom -> right-left -> bottom-top
    int top=0;
    int left=0;
    int bottom=n-1; //row bottom
    int right=m-1; //col right

    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int j=top;j<=bottom;j++){
            ans.push_back(matrix[j][right]);
        }
        right--;
        if(top<=bottom){
            for(int k=right;k>=left;k--){
                ans.push_back(matrix[bottom][k]);
            }
            bottom--;
        }
        if(left<right){
            for(int l=bottom;l>=top;l--){
                ans.push_back(matrix[l][left]);
            }
            left++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans=spiralMatrix(matrix);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}