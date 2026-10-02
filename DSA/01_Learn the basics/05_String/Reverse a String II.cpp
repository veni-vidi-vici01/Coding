-------------------------------------------------New Striver(Optimal)---------------------------------------
class Solution{	
public:		
	vector<char> reverseString(vector<char>& s){
		for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-1-i]);
        }
        return s;
	}
};