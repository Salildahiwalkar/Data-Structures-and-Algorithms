#include <bits/stdc++.h>
using namespace std;

// Better Solution
// Time complexity O(n log n)
// Space Complexity O(n )
string read(int n, vector<int> book, int target)
{
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int num = book[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main(){
    int n, target;
    vector<int> book;
    cin >> n >> target;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        book.push_back(num);
    }

    cout << read(n, book, target);
}