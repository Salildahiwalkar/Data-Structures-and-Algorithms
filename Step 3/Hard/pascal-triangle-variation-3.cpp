#include <bits/stdc++.h>
using namespace std;

vector<int> genreateRow(int row){
    vector<int> ansRow;
    long long ans = 1;
    ansRow.push_back(1);
    for(int col=1; col<row; col++){
        ans = ans * (row-col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;
    for(int i =1; i<=n; i++){
        ans.push_back(genreateRow(i));
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> ans = pascalTriangle(n);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}