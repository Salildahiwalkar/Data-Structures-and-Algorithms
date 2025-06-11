#include <bits/stdc++.h>
using namespace std;

// Time Complexity 
// Worst and Average Case - O(n^2)
// Best O(n)
void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int didSwap = 0; // for optimisation
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                // swap(arr[min], arr[i]);
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
            if(didSwap == 0) break; // optimising time complexity to O(n)
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    bubble_sort(arr, n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}