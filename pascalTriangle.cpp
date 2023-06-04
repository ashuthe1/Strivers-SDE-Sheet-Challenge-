#include <bits/stdc++.h>

using ll = long long;
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<ll>>v(n);
  v[0].push_back(1);

  for(int i = 1; i < n; i++)
  {
    v[i].push_back(1);
    for(int j = 0; j < v[i-1].size() - 1; j++) v[i].push_back(v[i-1][j] + v[i-1][j+1]);
    v[i].push_back(1);
  }
  return v;
}
