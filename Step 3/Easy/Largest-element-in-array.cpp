#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest) largest=arr[i];
    }
    return largest;
}
int main(){
    int n, nums;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    cout << largestElement(arr, n);
}