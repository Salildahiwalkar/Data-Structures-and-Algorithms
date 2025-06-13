#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){}
        else return false;
    }
    return true;
}
int main(){
    int n, nums;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    cout << isSorted(n, arr);
}