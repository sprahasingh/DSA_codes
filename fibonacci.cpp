#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
bool CheckFiboNum(int n)
{
    int i = 0;
    while (i <= n)
    {
        if (fib(i) == n)
        {
            cout << "Yes" << endl;
        }
    }
    cout << "No" << endl;
}
int main()
{
    CheckFiboNum(5);
    CheckFiboNum(6);
    return 0;
}