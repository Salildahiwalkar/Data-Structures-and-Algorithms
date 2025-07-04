#include <bits/stdc++.h>
using namespace std;
// Optimal Solution
// Time Complexity = O(n)
// Space Complexity = O(1) 
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j = -1;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return a;
    
    for(int i=j+1; i<n; i++){
        if(a[i]!=0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main(){
    int n, nums; 
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> nums;
        arr.push_back(nums);
    }
    arr = moveZeros(n, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}