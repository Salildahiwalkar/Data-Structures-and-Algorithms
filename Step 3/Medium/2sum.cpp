#include <bits/stdc++.h>
using namespace std;

// Better Complexity
// Time Complexity O(n log n)
// Space Complexity O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    map <int, int> mpp;
    for(int i=0; i<n; i++){
        int num = nums[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}
int main(){
    int n, target;
    cin >> n >> target;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int nums;
        cin >> nums;
        arr.push_back(nums);
    }
    vector <int> ans = twoSum(arr, target);

    for(auto it : ans){
        cout << it << " ";
    }
}