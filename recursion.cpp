#include <bits/stdc++.h>
using namespace std;

// void print_n_times(string name, int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << name << " ";
//     print_n_times(name, n - 1);
// }

// void print_i_to_n(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     cout << i << " ";
//     print_i_to_n(i + 1, n);
// }

// void print_n_to_i(int n, int i)
// {
//     if (n < i)
//     {
//         return;
//     }
//     cout << n << " ";
//     print_n_to_i(n - 1, i);
// }

// int sum_n_num(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum_n_num(n - 1);
// }

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

void reverse_array(vector<int> &arr, int n, int i)
{
    if (i >= n / 2)
    {
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            cout << *(it) << " ";
        }
        cout << endl;
        return;
    }
    swap(arr[i], arr[n - 1]);
    reverse_array(arr, n - 1, i + 1);
}

int main()
{
    // print_n_times("Spraha", 7);
    // print_i_to_n(2, 7);
    // print_n_to_i(9, 3);
    // cout << sum_n_num(6);
    // cout<<factorial(5);
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse_array(arr, arr.size(), 0);
    return 0;
}