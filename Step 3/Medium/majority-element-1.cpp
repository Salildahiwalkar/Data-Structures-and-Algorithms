#include <bits/stdc++.h>
using namespace std;

// Time complexity O(nlogn) + O(n)
// Space complexity O(n)
int majorityElement(vector<int>& nums) {
    map<int, int> mpp;
    int n = nums.size();
    for(int i=0; i<n; i++){
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
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
    cout << majorityElement(arr);
}