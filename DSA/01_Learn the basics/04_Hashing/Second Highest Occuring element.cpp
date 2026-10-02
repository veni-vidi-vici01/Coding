--------------------------------------------------New striver(Optimal)----------------------------
class Solution {
   public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int maxFreq = 0, secondMaxFreq = 0;
        int maxElem = INT_MAX, secondMaxElem = INT_MAX;

        for (auto& entry : freq) {
            int elem = entry.first;
            int count = entry.second;

            if (count > maxFreq) {
                secondMaxFreq = maxFreq;
                secondMaxElem = maxElem;
                maxFreq = count;
                maxElem = elem;
            } else if (count == maxFreq) {
                maxElem = min(maxElem, elem);
            } else if (count > secondMaxFreq) {
                secondMaxFreq = count;
                secondMaxElem = elem;
            } else if (count == secondMaxFreq) {
                secondMaxElem = min(secondMaxElem, elem);
            }
        }

        return (secondMaxFreq == 0) ? -1 : secondMaxElem;
    }
};