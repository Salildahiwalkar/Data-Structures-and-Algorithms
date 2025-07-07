#include <bits/stdc++.h>
using namespace std;

// Space Complexity O(n)
// Time Complexity O(n+nlogn)
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    // O(n)
    for(int i = n-1; i>=0; i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi = max(a[i], maxi);
    }
    // Nlogn
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int nums;
        cin >> nums;
        arr.push_back(nums);
    }
    vector<int> ans = superiorElements(arr);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}