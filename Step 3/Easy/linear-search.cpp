#include <bits/stdc++.h> 
using namespace std;

int linearSearch(vector<int> &a, int x) {
    //    Write your code here
    for(int i=0; i<a.size(); i++){
        if(a[i]==x) return i;
    }
    return -1;
}
int main(){
    int n, nums, x; 
    cin >> n >> x;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    cout << linearSearch(arr, x);
}