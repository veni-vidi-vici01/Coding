-------------------------------------------------Optimal-------------------------------------------
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v={"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> s;
        string a;
        vector<string> b;
        for(int i=0;i<digits.size();i++){
            s.push_back(v[digits[i]-'0']);
        }
        b=letter(0,0,s,a,b);
        return b;
    }
    vector<string> letter(int ind1,int ind2,vector<string>& s,string a,vector<string>& b){
           if(a.size()==s.size()){
            b.push_back(a);
            return b;
           }
           if (ind1 >= s.size() || ind2 >= s[ind1].size()) {
            return b;
           }
           a.push_back(s[ind1][ind2]);
           letter(ind1+1,0,s,a,b);
           a.pop_back();
           letter(ind1,ind2+1,s,a,b);
           return b;
    }
};
//The question I was unable to solve in Recursion(used ai to solve them)
//combination 1 considers all the permutation
//combination 2 is a way in recursion for finding permutation without repetition
//Solve any question by thinking on the above two different recursion approachs