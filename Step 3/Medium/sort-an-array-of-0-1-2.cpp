#include <bits/stdc++.h> 
using namespace std;

// Dutch National Flag Algorithm
// Time Complexity O(n)
// Space Complexity O(1)
void sortArray(vector<int>& arr, int n)
{
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1) mid++;
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

    sortArray(arr, n);

    for(auto it : arr){
        cout << it << " ";
    }
}
