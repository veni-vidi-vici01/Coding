---------------------------------------------------New Striver(Optimal)---------------------------------
class Solution {
   public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int largest = INT_MIN;
        int min = INT_MAX;
        unordered_map<int, int> v;
        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]] += 1;
        }
        for (auto i : v) {
            int a = i.second;
            if (a > largest) {
                largest = a;
            }
            if (a < min) {
                min = a;
            }
        }
        return min + largest;
    }
};
