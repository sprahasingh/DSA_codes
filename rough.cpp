#include <bits/stdc++.h> //All libraries
using namespace std;
bool checkArmstrong(int n)
{
    int num = n;
    int *digits = new int;
    int i = 0;
    int sum_cube = 0;
    while (num > 0)
    {
        digits[i] = num % 10;
        num = int(num / 10);
        i++;
    }
    for (int j = 0; j <= i; j++)
    {
        sum_cube = sum_cube + pow(digits[j], 3);
    }
    if (n == sum_cube)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}
int main()
{
    checkArmstrong(1634);
    return 0;
}