#include <bits/stdc++.h>
using namespace std;

void explaination(){
    /* BINARY SEARCH
    Q1. Check if X exists in the sorted array or not?

    A[] = {1, 4, 5, 8, 9}
    */
    bool res = binary_search(a, a+n, 3);
    // returns false;
    bool res = binary_search(a, a+n, 4);

    /* Lower bound function 
    returns iterator of first occurence of element or immediate greator element's iterator
    a[] = {1, 4, 5, 6, 9, 9}*/
    int ind = lower_bound(a, a+n, 4); // returns iterator
    // to get index 
    int ind = lower_bound(a, a+n, 4) - a; // gives 1
    int ind = lower_bound(a, a+n, 7) - a; // gives 4
    int ind = lower_bound(a, a+n, 10) - a; // gives 6 will point to immediate after to 9 

    // syntax for vector
    int ind = lower_bound(a.begin(), a.end(), a) - a.begin();

    /*Upper Bound function
    always returns iterator of immediate greator element
    a[]= {1, 4, 5, 6, 9, 9}*/
    int ind = upper_bound(a, a+n, 4) - a; // returns index of itertor pointing to 5 
    int ind = lower_bound(a, a+n, 7) - a; // gives iterator of 9
    int ind = lower_bound(a, a+n, 10) - a; // gives iterator of space after 9

    // syntax for vector
    int ind = upper_bound(a.begin(), a.end(), a) - a.begin();
}
void questions(){
    /* Q. Find the first occurence of a X in a sorted array. If it does not exists, print -1
    A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}*/
    
    int ind = lower_bound(a, a+n, X) - a;
    if(ind != n && a[ind] == X) cout << ind;
    else cout << -1;

    /*
    X = 4   -> 1
    X = 2   -> -1
    X = 12  -> -1
    */

    /* Q. Find the last occurence of a X in a sorted array. If it does not exists, print -1
    A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}*/
    
    int ind = upper_bound(a, a+n, X) - a;
    ind--;
    if(ind >=0 && a[ind] == X) cout << ind;
    else cout << -1;

    /*
    X = 4   
    X = 2   
    X = 0  
    */

    /* Q. Find the largest number smaller than X in a sorted array. If it does not exists, print -1
    A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}*/
    
    int ind = lower_bound(a, a+n, X) - a;
    ind--;
    if(ind >=0) cout << a[ind];
    else cout << -1;

    /*
    X = 4   -> 1
    X = 2   -> 11
    X = 1  -> -1
    */

    /* Q. Find the smallest number greater than X in a sorted array. If it does not exists, print -1
    A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}*/
    
    int ind = upper_bound(a, a+n, X) - a;
    ind--;
    if(ind <n) cout << ind;
    else cout << -1;

    /*
    X = 4   -> 9
    X = 2   ->  4
    X = 1   -> 4
    */
}
int main(){
    
}