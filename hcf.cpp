#include <bits/stdc++.h>
using namespace std;
int calcGCD(int n, int m)
{
    // int gcd = 1;
    // for(int i = 1; i <= min(m,n); i++){
    //   if (n % i == 0 && m % i == 0) {
    //       gcd = i;
    //   }
    // }
    // return gcd;

    // for(int i = min(m,n); i>=1; i--){
    //     if (n % i == 0 && m % i == 0){
    //         return i;
    //     }
    // }

    // if(n==0){
    //     return m;
    // }
    // if(m==0){
    //     return n;
    // }
    // if (n >= m) {
    //     n = n - m;
    //     calcGCD(n, m);
    // }
    // else{
    //     m = m - n;
    //     calcGCD(m, n);
    // }

    while (m != 0)
    {
        int temp = n % m;
        n = m;
        m = temp;
    }
    return n;
}
int main()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    int gdc = calcGCD(a, b);
    cout << "GDC of " << a << " and " << b << " is " << gdc << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> count_factors(int n)
// {
//     vector<int> factors;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             factors.push_back(i);
//             if (i != n / i)
//             {
//                 factors.push_back(n / i);
//             }
//         }
//     }
//     return factors;
// }
// int main()
// {
//     int n1, n2;
//     cout << "Enter 2 numbers" << endl;
//     cin >> n1 >> n2;
//     vector<int> factor1 = count_factors(n1);
//     vector<int> factor2 = count_factors(n2);
//     sort(factor1.begin(), factor1.end());
//     sort(factor2.begin(), factor2.end());
//     int len = 0;
//     for (auto it = factor1.begin(); it != factor1.end(); it++)
//     {
//         len++;
//     }
//     bool flag = 1;
//     while (flag)
//     {
//         len--;
//         for (auto it = factor2.begin(); it != factor2.end(); it++)
//         {
//             if (*(it) == factor1[len])
//                 flag = 0;
//         }
//     }
//     cout << "HCF:" << factor1[len];
//     return 0;
// }