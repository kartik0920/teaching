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

bool pow2(int n)
{
    int count = output(n);
    if (count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    bool x = pow2(n);
    if (x == true)
    {
        cout << "Pow of 2" << endl;
    }
    else
    {
        cout << "Not pow 2" << endl;
    }
    return 0;
}