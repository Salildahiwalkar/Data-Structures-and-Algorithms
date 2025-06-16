#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0, maxi = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else cnt = 0;
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

    cout << findMaxConsecutiveOnes(arr);
}