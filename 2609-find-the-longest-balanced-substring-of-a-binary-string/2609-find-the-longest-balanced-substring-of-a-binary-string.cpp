class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxi=0;
        for(int i=0;i<s.size();){
            int c1=0, c2=0;
           while(i<s.size() && s[i]=='0'){
            c1++;
            i++;
           } 
           while(i<s.size() && s[i]=='1'){
            c2++;
            i++;
           }
           int l=2*min(c1,c2);
           maxi=max(maxi,l);
    }
    return maxi;
    }
};