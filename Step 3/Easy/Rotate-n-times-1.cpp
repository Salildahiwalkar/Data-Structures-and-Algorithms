#include <bits/stdc++.h>
using namespace std;

void rotateRight(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0 || k % n == 0) return; 

    k = k % n;
    vector<int> temp(k);

    for(int i=n-k; i<n; i++){
        temp[i-(n-k)] = arr[i];
    }
    for(int i=n-1; i>=k; i--){
        arr[i]=arr[i-k];
    }
    for(int i=0; i<k; i++){
        arr[i]=temp[i];
    }
}

void rotateLeft(vector<int>& arr, int k) {
    // Write your code here.
    int n = arr.size();
    if (n == 0 || k % n == 0) return; 

    k = k % n;
    vector<int> temp(k);

    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }

    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }

    for(int i=n-k; i<n; i++){
        arr[i]=temp[i-(n-k)];
    }
}
int main(){
    int n, nums, k;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    rotateLeft(arr, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}