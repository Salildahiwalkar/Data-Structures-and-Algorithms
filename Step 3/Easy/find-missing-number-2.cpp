#include <bits/stdc++.h>
using namespace std;

// Optimal - XOR Method
// Time Complexity O(n)
// Space Complexity O(1)
int missingNumber(vector<int>& nums){
    int xor1 = 0, xor2 = 0;
    int n = nums.size()-1;

    for(int i=0; i<=n; i++){
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i+1);
    }
    return xor1 ^ xor2;   
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

    cout << missingNumber(arr);
}