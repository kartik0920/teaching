#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int count(int n)
{
    int x = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            x++;
        }
        n = n >> 1;
    }
    return x;
}

int solve(int n)
{
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += count(i);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}