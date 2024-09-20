#include <bits/stdc++.h> //All libraries
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    bitset<32> binary_num(num);
    bitset<32> reversed_bits;
    for (int i = 0; i < 32; i++)
    {
        reversed_bits[i] = binary_num[31 - i];
    }
    int reversed_num = static_cast<int>(reversed_bits.to_ulong());
    cout << reversed_num;
    return 0;
}