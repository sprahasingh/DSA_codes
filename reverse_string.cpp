#include <bits/stdc++.h>
using namespace std;
string reverseString(string &str)
{
    int start = 0;
    int end = str.length();
    vector<string> words;
    string reversed_words = "";

    while (start < end)
    {
        int prev_start = start;
        while (str[start] != ' ' && start < end)
        {
            start++;
        }
        start++;
        words.push_back(str.substr(prev_start, start - prev_start - 1));
        while (start < end && str[start] == ' ')
        {
            start++;
        }
    }
    for (int i = 0; i < words.size(); i++)
    {
    }
    for (int i = words.size() - 1; i > 0; i--)
    {
        reversed_words += (words[i] + ' ');
    }
    reversed_words += words[0];
    return reversed_words;
}
int main()
{
    string str = "My name is Spraha Singh";
    cout << reverseString(str);
    return 0;
}