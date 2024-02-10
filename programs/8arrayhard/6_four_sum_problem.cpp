#include <bits/stdc++.h>
// #include <algorithm>
using namespace std;
vector<vector<int>> better(int n, vector<int> &nums)
{
    // vector<vector<int>> ans;3.
    set<vector<int>> s;
    int target = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
vector<vector<int>> better(vector<int> &nums, int target)
{
    int n = nums.size();
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashset;
            for (int k = j + 1; k < n; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                // sum=sum+;
                int fourth = target - sum;
                if (hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
vector<vector<int>> optimal(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> s;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                // mandatory to give like this to avaoid frun time error
                long long sum = nums[i] + nums[j];
                sum = sum + nums[k];
                sum = sum + nums[l];

                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    s.push_back(temp);
                    k++;
                    l--;

                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }
    return s;
}
int main()
{
    vector<int> nums = {1, 1, -2, -1, -1, -4, 0, 2};
    vector<vector<int>> ans = optimal(nums, 0);
    for (auto row : ans)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}