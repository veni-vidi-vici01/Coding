#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        for (auto j = i; j != arr.begin(); j--)
        {
            if ((*(j - 1) > *(j)) && j - 1 >= arr.begin())
            {
                int temp = *(j - 1);
                *(j - 1) = *j;
                *j = temp;
            }
        }
    }
}
int main()
{
    vector<int> nums = {5, 4, 4, 1, 1};
    insertionSort(nums);
    for (auto i : nums)
    {
        cout << i << endl;
    }
    return 0;
}