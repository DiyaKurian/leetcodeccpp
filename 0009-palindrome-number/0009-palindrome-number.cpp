class Solution {
public:
     bool isPalindrome(int x) {
        string s=to_string(x);
        int n=s.length()-1;
        
        for(int i=0,j=n; i<=n,j>=0; i++,j--){
            if(s[i]!=s[j]) return false;   
        }
        return true;
        
    }
};