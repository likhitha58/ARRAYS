#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,2,4,1};
    int xor1=0;
    for(int i=0;i<arr.size();i++){
        xor1=xor1^arr[i];
    }
    cout<<xor1;
    return 0;
}