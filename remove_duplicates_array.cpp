#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(vector<int> &nums)
{
    int len = nums.size();
    int count = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (nums[i + 1] == nums[i])
        {
            int j = i + 1;
            while (nums[j] == nums[i] && j < len)
            {
                nums[j] = -1;
                count++;
                j++;
            }
            i = j - 1;
        }
    }
    cout << endl;
    vector<int> new_nums;
    for (int i = 1; i < len; i++)
    {
        if (nums[i] != -1)
        {
            new_nums.push_back(nums[i]);
        }
    }
    nums = new_nums;
}
int main()
{
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    removeDuplicates(nums);
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}