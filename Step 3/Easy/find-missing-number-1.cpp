#include <bits/stdc++.h>
using namespace std;

// Optimal - Sum Method
// Time Complexity O(n);
// Space Complexity O(1)
int missingNumber(vector<int> arr, int n){
    int sum = (n * (n+1))/2;
    int s2 = 0;

    for(int i=0; i<n; i++){
        s2 = s2 + arr[i];
    }
    return sum - s2;
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

    cout << missingNumber(arr, n);
}