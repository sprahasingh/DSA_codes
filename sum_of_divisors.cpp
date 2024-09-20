#include <bits/stdc++.h>
using namespace std;
int sumOfDivisors(int m)
{
    int sum = 0;
    // for (int i = 1; i <= m / 2; i++)
    // {
    //     if (m % i == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // sum += m;
    for (int i = 1; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            sum += i;
            if (m / i != i)
            {
                sum += m / i;
            }
        }
    }

    return sum;
}
int sumOfAllDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += sumOfDivisors(i);
    }
    return sum;
}
int main()
{
    cout << sumOfAllDivisors(5);
    return 0;
}