#include <bits/stdc++.h>
using namespace std;
// Brute Force
// Time Complexity = O(2n)
// Space Complexity = O(x) x = no. of non zero elements, Worst case = O(n)
vector<int> moveZeros(int n, vector<int>& a) {
    // step - 1
    vector<int> temp;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }

    // step - 2
    int nz= temp.size();
    for(int i=0; i<nz; i++){
        a[i]=temp[i];
    }

    //step - 3
    for(int i=nz; i<n; i++){
        a[i]=0;
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