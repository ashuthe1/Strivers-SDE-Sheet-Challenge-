#include <bits/stdc++.h> 
using ll = long long;
long long maxSubarraySum(int arr[], int n)
{
    ll mx = 0, cur = 0;
    for(int i = 0; i < n; i++)
    {
        cur += arr[i];
        if(cur < 0) cur = 0;
        mx = max(mx, cur);
    }
    return mx;
}