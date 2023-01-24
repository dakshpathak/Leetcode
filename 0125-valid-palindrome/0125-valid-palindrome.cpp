class Solution {
public:
    bool checkPalindrome (int st, int ed, string &s){
        
        //base case
        if (s.length()<= 1){
            return true;
        }
        
        if (st>ed){
            return true;
        }
        
        if (s[st]==s[ed]){
            
            return checkPalindrome (++st, --ed, s);
        }
        return false;
    }
    
    
    bool isPalindrome(string s) {
        
        string s1 = "";
        
        char ch;
        
        for (auto &ch : s){
            
            if (isalnum(ch)){
                
                s1 += tolower(ch);
            }
        }
        return checkPalindrome (0, s1.size()-1, s1);
    }
};