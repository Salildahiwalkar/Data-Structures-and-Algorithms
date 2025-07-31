#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(N*logN)
// Space Complexity: O(N)
vector<int> majorityElement(vector<int> v)
{
    // Write your code here
    vector<int> ls;
    map<int, int> mpp;
    int n = v.size();
    int mm = (int)(n / 3) + 1;

    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
        if (mpp[v[i]] == mm)
        {
            ls.push_back(v[i]);
        }
        if (ls.size() == 2)
            break;
    }
    sort(ls.begin(), ls.end());
    return ls;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans = majorityElement(v);
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}