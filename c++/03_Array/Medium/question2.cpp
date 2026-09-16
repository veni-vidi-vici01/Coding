------------------------ Brute -----------------------------------------------------
                     merge Sort 
----------------------------------------optimal------------------------------------------                     
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int temp = 0;
        int n = nums.size();
        for (int i = temp; i < n; i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[temp], nums[i]);
                temp++;
            }
        }
        for (int i = temp; i < n; i++)
        {
            if (nums[i] == 1)
            {
                swap(nums[temp], nums[i]);
                temp++;
            }
        }
        for (int i = temp; i < n; i++)
        {
            if (nums[i] == 2)
            {
                swap(nums[temp], nums[i]);
                temp++;
            }
        }
    }
};
----------------------dutch national flag algorithm------------------------------
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
  int n=nums.size();
  int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    }
};