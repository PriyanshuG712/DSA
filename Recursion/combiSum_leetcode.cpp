#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void f(int ind, vector<int> &ds, int target, vector<int> &arr, vector<vector<int>> &ans)
    {
        if (ind == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            f(ind, ds, target - arr[ind], arr, ans);
            ds.pop_back();
        }
        f(ind + 1, ds, target, arr, ans);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0, ds, target, candidates, ans);
        return ans;
    }
};

int main()
{
    Solution s1;
    int target = 7;
    vector<int> p{2, 3, 6, 7};
    vector<vector<int>> ans = s1.combinationSum(p, target);
    cout << "the Combinations are:" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}