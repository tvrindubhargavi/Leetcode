class Solution {
public:
    string expand(const string &s, int l, int r){
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        string longest="";
        for(int i=0;i<s.length();i++){
            string odd=expand(s,i,i);
            if(odd.length()>longest.length()){
                longest=odd;
            }
            string even=expand(s,i,i+1);
            if(even.length()>longest.length()){
                longest=even;     
               }
        }
        return longest;
    }
};