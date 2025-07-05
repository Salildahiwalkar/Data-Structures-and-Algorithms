#include <bits/stdc++.h>
using namespace std;

// Kandane's Algorithm 
// Time Complexity O(n)
// Space Complexity O(1)

// To print subarray add code written in comment
int maxSubArray(vector<int>& nums) {
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        // if(sum == 0) start = i;
        if(sum > maxi){
            maxi = sum;
            // ans_start =start, ans_end = i;
        }

        if(sum < 0){
           sum = 0;
        }
    }

    return maxi;
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
    cout << maxSubArray(arr);
}
