#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> setMatrixZero(vector<vector<int>>matrix){
    int n=matrix.size();
    int m=matrix[0].size();

    int col0=1;
    for(int i=0;i<n;i++){
        if(matrix[i][0]==0){
            col0=0;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=1;j--){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
        if(col0==0){
            matrix[i][0]=0;
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>>ans=setMatrixZero(matrix);
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}