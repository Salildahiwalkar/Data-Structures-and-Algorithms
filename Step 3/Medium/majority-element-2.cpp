#include <bits/stdc++.h>
using namespace std;

// Moore Voting algorithm - Optimal Solutions
// Time complexity O(n)+O(n)(only for when the question says major element may exist)
// Space complexity O(1)
int majorityElement(vector<int> arr){
    int cnt = 0;
    int el;
    for(int i=0; i<arr.size(); i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    // Only for when it is given majority element may exist
    int cnt1=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==el) cnt1++;
    }
    if(cnt1> (arr.size()/2)) return el;
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int nums;
        cin >> nums;
        arr.push_back(nums);
    }
    cout << majorityElement(arr);
}