#include <bits/stdc++.h>
using namespace std;

// Better Solution
// Time Complexity Nlogn for sorting and further N 
int longestSuccessiveElements(vector<int> &a)
{
    if (a.size() == 0)
        return 0;
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN, longest = 0, cnt = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == lastSmaller)
        {
            lastSmaller = a[i];
            cnt++;
        }
        else if (a[i] != lastSmaller)
        {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }

    return longest;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int nums;
        cin >> nums;
        arr.push_back(nums);
    }
    cout << longestSuccessiveElements(arr);
}