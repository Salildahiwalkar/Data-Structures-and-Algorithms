#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(n)
// Space Complexity O(1)
int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int profit = 0;
    for(int i=1; i<prices.size(); i++){
        int cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }
    return profit;
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
    cout << maxProfit(arr);
}