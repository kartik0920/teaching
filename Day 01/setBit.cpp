#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int output(int n)
{
    int count = 0;
    while (n != 0)
    {
        bool x = n & 1;
        if (x == 1)
        {
            // count = count + 1;
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    cout << output(n) << endl;
    return 0;
}