#include <bits/stdc++.h>
using namespace std;
// int char_to_int(char ch)
// {
//     return (ch - 'a');
// }
// vector<int> hashh(string str)
// {
//     vector<int> count(26, 0);
//     transform(str.begin(), str.end(), str.begin(), ::tolower);
//     for (int i = 0; i < str.length(); i++)
//     {
//         count[char_to_int(str[i])]++;
//     }
//     return count;
// }
// void print_count(vector<int> count, char ch)
// {
//     cout << "Number of occurence of " << ch << " is " << count[char_to_int(ch)] << endl;
// }
int main()
{
    string str = "Hello my name is Spraha Singh";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    // vector<int> count = hashh(str);
    int hashh[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hashh[str[i] - 'a']++;
    }

    int n;
    cin >> n;
    while (n--)
    {
        char ch;
        cin >> ch;
        cout << hashh[ch - 'a'] << endl;
    }
    return 0;
}