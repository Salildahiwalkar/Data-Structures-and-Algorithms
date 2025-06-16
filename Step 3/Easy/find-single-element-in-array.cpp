#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
// Time Complexity O(n)
// Space Complexity O(1)
int getSingleElement(vector<int> &arr){
	int xorr = 0;
	for(int i=0; i<arr.size(); i++){
		xorr = xorr ^ arr[i];
	}
	return xorr;
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

    cout << getSingleElement(arr);
}