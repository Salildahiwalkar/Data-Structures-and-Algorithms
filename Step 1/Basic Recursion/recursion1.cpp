#include <bits/stdc++.h>
using namespace std;

void f1(int i, int n){
    if(i>n) return;
    cout << "name" << endl;
    f1(i+1, n);
}
void f2(int i, int n){
    if(i>n) return;
    cout << i << endl;
    f2(i+1, n);
}
void f3(int i, int n){
    if(i<1) return;
    cout << i << endl;
    f3(i-1, n);
}
void f4(int i, int n){
    if(i<1) return;
    f4(i-1, n);
    cout << i << endl;
}
void f5(int i, int n){  
    if(i>n) return;
    f5(i+1, n);
    cout << i << endl;
}
int main(){
    // Print name N times using Recursion
    // Time Complexity O(n)
    // Space Complexity O(n)
    f1(1,3);
    cout << endl;

    // Print linearly from 1 to N
    f2(1,4);
    cout << endl;

    // Print in terms of N to 1
    f3(3, 3);
    cout << endl;

    // Print linearly from 1 to N 
    // (but by Backtracking)
    f4(3, 3);
    cout << endl;

    // Print linearly from N to 1 
    // (but by Backtracking)
    f5(1, 4);
    cout << endl;
}