#include <bits/stdc++.h> 
using namespace std;

// Optimal Solution
// Time Complexity O(2n)
// Space Complexity O(1)
int getLongestSubarray(vector<int>& a, long long k){
    int left=0, right=0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k) maxLen = max(maxLen, right-left+1);
        right++;
        if(right < n) sum += a[right];
    }
    return maxLen;
}
int main(){
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a;

    for(int i=0; i<n; i++){
        int nums;
        cin >> nums;
        a.push_back(nums);
    }

    cout << getLongestSubarray(a, k);
}