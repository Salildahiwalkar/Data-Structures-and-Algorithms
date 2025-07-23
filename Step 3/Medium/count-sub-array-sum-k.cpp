#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int perfixSum = 0, cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        perfixSum += nums[i];
        int remove = perfixSum - k;
        cnt += mpp[remove];
        mpp[perfixSum] += 1;
    }

    return cnt;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        arr.push_back(in);
    }

    int res = subarraySum(arr, k);

    cout << res;
}