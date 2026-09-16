--------------------------------Brute----------------------------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int start;
        int end;
        int temp;
        vector<int> v1;
        vector<vector<int>> v2;
        
        sort(intervals.begin(), intervals.end());
        
        for(int i = 0; i < intervals.size(); i++) {
            temp = 0;
            // Check if index 'i' was already merged by looking in v1
            for(int k = 0; k < v1.size(); k++) {
                if(v1[k] == i) {
                    temp = 1;
                }
            }
            // Skip this interval if it was already merged into a previous one
            if(temp == 1) continue;

            start = intervals[i][0];
            end = intervals[i][1];
            
            // Start j from i + 1 to avoid self-matching (i == j) and reverse-matching
            for(int j = i + 1; j < intervals.size(); j++) {
                // Your exact overlap logic, just using 'start' and 'end' as the reference
                if((start <= intervals[j][0] && intervals[j][0] <= end) || (start <= intervals[j][1] && intervals[j][1] <= end)) {
                     start = min({start, end, intervals[j][0], intervals[j][1]});
                     end = max({start, end, intervals[j][0], intervals[j][1]});
                     
                     // Store the merged index in v1 so we skip it later
                     v1.push_back(j);
                }
            }
            
            // Push the final calculated start and end into v2
            vector<int> v;
            v.push_back(start);
            v.push_back(end);
            v2.push_back(v);
        }
        
        return v2;
    }
};
-------------------------------------------------------Optimal---------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin() , intervals.end());
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            if( ans.empty() || intervals[i][0] > ans.back()[1] ){
                ans.push_back(intervals[i]);
            }
            else {
                ans.back()[1] = max( ans.back()[1] , intervals[i][1] );
            }
        }

        return ans;
    }
};