#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(n)
// Space Complexity O(n)
vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> ans(nums.size(), 0);
    int posIndex=0, negIndex=1;
    for(int i=0; i<nums.size(); i++){
    if(nums[i]<0){
        ans[negIndex] = nums[i];
        negIndex += 2;
    }
    else{
        ans[posIndex] = nums[i];
        posIndex +=2;
    }
   } 
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
    vector<int> ans = rearrangeArray(arr);
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
}