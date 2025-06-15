#include <bits/stdc++.h>
using namespace std;

// Brute Force
// Time Complexity O(n1+n2)
// Space Complexity O(n1+n2)
vector<int> sortedArray(vector<int> &a, vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int i=0, j=0;
    vector<int> unionArr;
    while(i<n1 && j <n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
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