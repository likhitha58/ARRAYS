#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int>height){
    int area=0;
    int maxArea=0;
    int left=0;
    int right=height.size()-1;

    while(left<right){
        area=min(height[left],height[right])*(right-left);
        maxArea=max(area,maxArea);
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxArea;
}

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int ans=maxWater(height);
    cout<<ans;
    return 0;
}