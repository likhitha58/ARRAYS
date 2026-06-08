#include<bits/stdc++.h>
using namespace std;
vector<int>mergeSorted(vector<int>a,int m,vector<int>b,int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            i--;
        }else{
            a[k]=b[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }
    while(i>=0){
        a[k]=a[i];
        i--;
        k--;
    }
    return a;
}
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<int>a(m+n);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    vector<int>ans=mergeSorted(a,m,b,n);
    for(int i=0;i<m+n;i++){
        cout<<ans[i];
        if(i<m+n-1) cout<<",";
    }
    return 0;
}