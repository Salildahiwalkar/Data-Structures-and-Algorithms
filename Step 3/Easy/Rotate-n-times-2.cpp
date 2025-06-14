#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(2n)
// Space Complexity O(1)
// if you have to write reverse function
void Reverse(vector<int>& arr, int start, int end){
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
} 
void rotateArrayLeft(vector<int>&arr, int k) {
    int n = arr.size();
    k = k % n; 
    // Left rotation logic
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

void rotateArrayRight(vector<int>&arr, int k) {
    int n = arr.size();
    k = k % n; 
    // Right rotation logic
    reverse(arr.begin(), arr.begin() + (n - k));
    reverse(arr.begin() + (n - k), arr.end());
    reverse(arr.begin(), arr.end());
}
int main(){
    int n, nums, k;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    rotateArrayRight(arr, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}