#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(n/2 * n/2) + O(n*n/2)
// Space Complexity O(1)
void rotate(vector<vector<int>> &mat)
{
    int n = mat.size();
    // Transpose
    // O(n/2 *n/2)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // reverse
    //O(n*n/2) 
    for (int i = 0; i < n; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    rotate(mat);

    cout << "The Final matrix is:\n";
    for (auto it : mat)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
}