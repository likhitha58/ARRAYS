#include<bits/stdc++.h>
using namespace std;
//given: [1,0,3]
//missing: 2
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int xor1=0;
    int xor2=0;
    for(int i=0;i<=n;i++){
        xor1=xor1^i;  //0^0=0, 0^1=1, 1^2=3, 3^3=0
    }
    for(int x:arr){
        xor2=xor2^x; //0^1=1, 1^0=1, 1^3=2
    }
    int result = xor1 ^ xor2; //0^2=2
    cout<<result<<endl;
    return 0;
}