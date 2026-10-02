-------------------------------------------------New Striver(Optimal)-------------------
class Solution {
   public:
    int countOdd(int arr[], int n) {
        int count_odd = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                count_odd++;
            }
        }
        return count_odd;
    }
};
