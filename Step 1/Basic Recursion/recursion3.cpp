#include <bits/stdc++.h>
using namespace std;

// Two Pointer
void f1(int l, int arr[], int r){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    f1(l+1,arr,r-1);
}
// Single Pointer
void f2(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    f2(i+1, arr, n);
}
bool f3(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f3(i+1, s);
}
int main(){
    int arr[]={1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    // Reverse an array
    // Two Pointer
    f1(0, arr, n-1);
    for(int i=0; i<n; i++) cout << arr[i] << " "; 
    cout << endl;

    // Single Pointer
    f2(0, arr, n);
    for(int i=0; i<n; i++) cout << arr[i] << " "; 
    cout << endl;

    // Check if a string is Palindrome
    // a string on reversal reads the same
    string s = "madam";
    cout << f3(0, s);
}