#include <bits/stdc++.h>
using namespace std;

void leftRotateOnce(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i]; 
    }
    arr[n-1]=temp;
}
int main(){
    int n, nums;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    leftRotateOnce(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}