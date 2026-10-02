-------------------------------------------Optimal----------------------------
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};
----------------------------------------New Striver(Optimal)--------------------
class Solution{	
public:		
    string largeOddNum(string& s){
        int temp=-1;
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')!=0){
                temp=i;
                break;
            }
        }
        for(int i=s.size()-1;i>=temp;i--){
            if((s[i]-'0')%2!=0){
                return s.substr(temp,i+1-temp);   //! The substr uses the starting point and the size it we want the sub string
            }
        }
        return "";
    }
};