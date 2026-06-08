#include<bits/stdc++.h>
using namespace std;
vector<int>removeDup(vector<int>&arr){
    //2 pointer approach
    //1 pointe rpoint towards the next unique element 
    //another pointer is sued to traverse the array
    //1st pointer is incremented when a unique elemnt is found and replaces the next element in the array
        int i=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]!=arr[i]){
                i++;
                arr[i]=arr[j];
            }
        }
        vector<int>ans;
        for(int k=0;k<=i;k++){
            ans.push_back(arr[k]);
        }
        return ans;
}
int main(){
    vector<int>arr={1,1,2,2,3,4,4,4};
    vector<int>result=removeDup(arr);
    
    cout << "Array after removing duplicates: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}