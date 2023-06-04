#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &v)
{
	vector<int>row, col;
	int n = v.size(), m = v[0].size();

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(v[i][j] == 0)
			{
				row.push_back(i);
				col.push_back(j);
			}
	
	for(int i = 0; i < row.size(); i++)
	{
		for(int j = 0; j < m; j++)
			v[row[i]][j] = 0;
	}

	for(int i = 0; i < col.size(); i++)
	{
		for(int j = 0; j < n; j++)
			v[j][col[i]] = 0;
	}
}