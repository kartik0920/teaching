#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        sum = sum + remainder;
        int x = n / 10;
        n = x;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}