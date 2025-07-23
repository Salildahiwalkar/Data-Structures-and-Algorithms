#include <bits/stdc++.h>
using namespace std;

// Better Solution 
// Time Complexity O(2nm)
// Space Complexity O(n) + O(m)
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
	int row[n] = {0};
	int col[m] = {0};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == 0)
			{
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (row[i] || col[j])
			{
				matrix[i][j] = 0;
			}
		}
	}

	return matrix;
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> mat(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mat[i][j];
		}
	}

	vector<vector<int>> ans = zeroMatrix(mat, n, m);

	cout << "The Final matrix is:\n";
	for (auto it : ans)
	{
		for (auto ele : it)
		{
			cout << ele << " ";
		}
		cout << "\n";
	}
}