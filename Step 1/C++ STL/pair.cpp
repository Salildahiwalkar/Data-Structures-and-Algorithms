#include <bits/stdc++.h>
using namespace std;

int main(){
    // Pairs used to store two elements in one element (similar to array but size=2) 
    // stored in utility library
    pair<int, int> p = {1, 2};

    // 1 -> first element, 3-> second element
    cout << p.first << " " << p.second << endl;

    // we can nest them in this way to store multiple elements
    pair<int, pair<int, int>> a = {1, {3, 4}};
    
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;

    // Pair is a data type so we can create array of it aswell
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 0}};

    // printing would look like this
    cout << arr[1].second << endl;

}