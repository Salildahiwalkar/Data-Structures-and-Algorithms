#include <bits/stdc++.h>
using namespace std;

// Brute Force
// Time Complexity O(n1 log n + n2 log n) + O(n1 + n2)
// Space Complexity O(n1+n2)+ O(n1+n2)
vector<int> sortedArray(vector<int> &a, vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i=0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it: st){
        temp.push_back(it);
    }
    return temp;
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
    vector<int> res = sortedArray(a, b);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}