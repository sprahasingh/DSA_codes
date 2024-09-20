#include <bits/stdc++.h> //All libraries
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    bitset<32> binary_num(num);
    int num_int = static_cast<int>(binary_num.to_ulong());
    cout << "Binary:" << binary_num << endl
         << "Integer:" << num_int;
    return 0;
}