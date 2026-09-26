class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n=s.size();
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[j]) continue;
            if(i-j==k) return true;
            j=i;
        }
        return (n-j)==k;
    }
};