#include <bits/stdc++.h>
using namespace std;

// Brute Force
// Time Complexity O(n1*n2)
// Space Complexity O(n2)
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
	vector<int> ans;
	int vis[m] = {0};
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr1[i]==arr2[j] && vis[j]==0){
				ans.push_back(arr1[i]);
				vis[j] = 1;
				break;
			}
			if(arr2[j]>arr1[i]) break;
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