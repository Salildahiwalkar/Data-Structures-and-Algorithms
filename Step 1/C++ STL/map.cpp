#include <bits/stdc++.h>
using namespace std;

int main(){
    // Key - Value pair data structure
    // unique and sorted on key, value can be duplicate 
    map<int, int> mpp;
    // first key, then value 
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int>mpp;

    mpp[1] = 2;          // {{1, 2}}
    mpp.emplace({3, 1}); // {{1, 2}, {3, 1}}
    mpp.insert({2, 4});   // {{1, 2}, {2, 4}, {3, 1}}
    mpp[{2, 3}] = 10; // {{2,3}(key), 10(value)}

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // prints value at 1
    cout << mpp[5]; // since not present will print either 0 or null 

    auto it = mpp.find(5); // point to mpp.endl i.e. just after last element

    // lower_bound and upper_bound
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap , size, empty are all same as above
}