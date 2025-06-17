#include <bits/stdc++.h> 
using namespace std;

// Optimal Solution 
// Time Complexity O(N*logN) - for ordered 
// for unordered best case O(n) for worst case O(n^2)
// Space Complexity O(n)
int getLongestSubarray(vector<int>& a, int k){
    long long sum = 0;
    map<long long, int> preSumMap;
    int maxLen = 0;

    for(int i = 0; i<a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(len, maxLen);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a;

    for(int i=0; i<n; i++){
        int nums;
        cin >> nums;
        a.push_back(nums);
    }

    cout << getLongestSubarray(a, k);
}