#include<bits/stdc++.h>
using namespace std;
//1.declare a set bcuz removes duplicates and lookup is O(n)
//2.check if num-1 exists bcuz that creates a sequence.
//3.declare length of the sequence.
//4.loop again to check if the next consecutive element exists
//5. if it does then increment the length.
//6. find the max length and return it
int longestConsecutive(vector<int>& arr) {
        int maxi=0;
        unordered_set<int>st(arr.begin(),arr.end());
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int currentNum=x;
                int length=1;
                
                while(st.find(currentNum+1)!=st.end()){
                    currentNum++;
                    length++;
                }
                maxi=max(maxi,length);
            }
        }
    return maxi;
}
int main(){
    vector<int>arr={15, 13, 12, 14, 11, 10, 9};
    int ans=longestConsecutive(arr);
    cout<<ans;
    return 0;
}