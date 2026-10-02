-------------------------------------------------Brute-------------------------
class Solution {
   public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        vector<int> v;
        for (int i = 0; i < indices.size(); i++) {
            int count = 0;
            for (int j = indices[i] + 1; j < arr.size(); j++) {
                if (arr[j] > arr[indices[i]]) {
                    count++;
                }
            }
            v.push_back(count);
        }
        return v;
    }
};
-----------------------------------------------Optimal-----------------------------
                                    Fenwick Tree (BIT).(will solve after learning tree)