#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter string:" << endl;
    cin >> str;
    isPalindrome(str);
    return 0;
}