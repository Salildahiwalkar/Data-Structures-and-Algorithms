#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
// Time complexity O(n) + O(nlogn)
// Space Complexity O()
string read(int n, vector<int> book, int target)
{
    int left = 0, right = n-1;
    sort(book.begin(), book.end());
    while(left < right){
        int sum = book[left]+book[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
    }return "NO";
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