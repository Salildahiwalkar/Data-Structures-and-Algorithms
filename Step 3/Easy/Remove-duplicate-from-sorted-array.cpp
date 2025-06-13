#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
	for(int j=1; j<n; j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
int main(){
    int n, nums;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    removeDuplicates(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}