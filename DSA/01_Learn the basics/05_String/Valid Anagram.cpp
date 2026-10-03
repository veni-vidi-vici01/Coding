------------------------------------------------------Brute-------------------------------------------
class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s==t){
                return 1;
            }
            return 0;
		}
};
-------------------------------------------------Optimal------------------------------------------------------------
class Solution {
   public:
    bool anagramStrings(string &s, string &t) {
        if (s.size() != t.size()) {
            return 0;
        }
        vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;
        for (char c : t) count[c - 'a']--;
        for (int i : count) {
            if (i != 0) return 0;
        }
        return 1;
    }
};
