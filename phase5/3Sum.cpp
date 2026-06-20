#include <bits/stdc++.h>
using namespace std;
// 1.sort in scending order
// 2.loop through array until last 2nd element
// 3.skip duplicate FIXED elements
// 4.initialise left and right pointers
// 5.while condition
// 6.if sum is 0 push into ans
// 7.move pointers
// 8.skip duplicate left and right values
// 9. if sum less than 0 move left else right
vector<vector<int>> threesum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n = arr.size();
    for (int i = 0; i < n - 2; i++)
    {
        if (i < n && arr[i] == arr[i - 1])
        {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            long long sum = (long long)arr[i] + arr[left] + arr[right];
            if (sum == 0)
            {
                ans.push_back({arr[i], arr[left], arr[right]});

                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1])
                {
                    left++;
                }
                while (left < right && arr[right] == arr[right + 1])
                {
                    right--;
                }
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threesum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}