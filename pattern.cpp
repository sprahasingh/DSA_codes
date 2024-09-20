#include <iostream>
using namespace std;
void pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern_5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_7(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j % n == 0 || (j < n && j % n >= i) || (j > n && j % n <= n - i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern_8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if ((j < n && j % n < i) || (j > n && j % n > n - i))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void pattern_9(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j % n == 0 || (j < n && j % n >= i) || (j > n && j % n <= n - i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if ((j < n && j % n < i) || (j > n && j % n > n - i))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void pattern_10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == j % 2)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}

void pattern_12(int n)
{
    for (int l = 1; l <= n; l++)
    {
        for (int i = 1; i <= l; i++)
        {
            cout << i;
        }
        for (int j = l + 1; j <= 2 * n - l; j++)
        {
            cout << " ";
        }
        for (int k = l; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}

void pattern_13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern_14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern_15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = n; j >= i; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern_16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void pattern_17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int l = 1; l <= i - 1; l++)
        {
            cout << ch;
            ch--;
        }
        for (int m = 1; m <= n - i; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + (n - 1);
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}

void pattern_19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                cout << "*";
            }
            else if (j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern_22(int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = 5;
        for (int j = 5; j > i; j--)
        {
            cout << num << " ";
        }
        num--;
        for (int k = 0; k < i; k++)
        {
            cout << num-- << " ";
        }
        // for (int l = 5; l > i; l--)
        // {
        //     cout << num << " ";
        // }
        cout << endl;
    }
}

int main()
{
    // pattern_1(5);
    // pattern_2(5);
    // pattern_3(5);
    // pattern_4(5);
    // pattern_5(5);
    // pattern_6(5);
    // pattern_7(5);
    // pattern_8(5);
    // pattern_9(5);
    // pattern_10(5);
    // pattern_11(5);
    // pattern_12(5);
    // pattern_13(5);
    // pattern_14(5);
    // pattern_15(5);
    // pattern_16(5);
    // pattern_17(5);
    // pattern_18(5);
    // pattern_19(5);
    // pattern_20(5);
    // pattern_21(5);
    pattern_22(5);
    return 0;
}