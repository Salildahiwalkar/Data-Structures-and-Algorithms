#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int a, n;
    // sorting in increasing order
    sort(a, a+n); // directly sorts datastructure pass through it - format [start, end)
    // ex {1, 3, 5, 2}
    sort(v.begin(), v.end()); // {1, 2, 3, 5}

    sort(a+2, a+4); // for sorting from middle
    // {1, 3, 2, 5}

    // sorting in decreasing order
    sort(a, a+n, greater<int>);

    // for sorting in your own way - MY WAY
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    /* sort it according to second element 
       if second element is same, then sort 
       it according to first element but in descending order */

    sort(a, a+n, comp); // comp is our own comparator which must be a boolean function

    int num = 7;
    int cnt = __builtin_popcount(num); // returns number of set bit 

    // if number is long long 
    long long num = 1529375602703756;
    int cnt = __builtin_popcountll(num);

    string s = "123"; // for all combinations make sure digits are sorted 
    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n); // returns iterator of maximum number, to access it we require *

}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second > p2.second) return true;
    if(p1.second < p2.second) return false;
    // they are same
    if(p1.first > p2.second) return true;
    return false;
}