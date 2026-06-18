#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m=b.size();

    int len=n+m;

    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            //case 1 both in same array
            if(left<n && right<n){
                if(a[left]>a[right]){
                    swap(a[left],a[right]);
                }
            }
            //case 2 one in a and one in b
            else if(left<n && right>=n){
                if(a[left]>b[right-n]){
                    swap(a[left],b[right-n]);
                }
            }
            //case 3 both in array b
            else{
                if(b[left-n]>b[right-n]){
                    swap(b[left-n],b[right-n]);
                }
            }
            left++;
            right++;
        }
        if(gap==1){
            break;
        }
        gap=(gap/2)+(gap%2);
    }
}

int main(){
    vector<int>a={2, 4, 7, 10};
    vector<int>b={2,3};

    mergeArrays(a,b);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    return 0;
}