#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int multiply(int n)
{
    int ans = 1;
    while (n != 0)
    {
        ans *= (n % 10);
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    cout << multiply(n) << endl;

    return 0;
}