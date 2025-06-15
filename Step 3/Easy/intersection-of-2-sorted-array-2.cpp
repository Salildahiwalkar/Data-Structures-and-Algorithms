#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
// Time Complexity O(n1+n2)
// Space Complexity O(n1+n2) in worst case
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
	int i=0, j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr2[j]<arr1[i]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return ans;
}

int main(){
    int n1;
    cin >> n1;
    vector<int> a;
    for(int i=0; i<n1; i++){
        int nums;
        cin >> nums;
        a.push_back(nums);
    }
    int n2;
    cin >> n2;
    vector<int> b;
    for(int i=0; i<n2; i++){
        int nums;
        cin >> nums;
        b.push_back(nums);
    }
    vector<int> res = findArrayIntersection(a, n1, b, n2);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}