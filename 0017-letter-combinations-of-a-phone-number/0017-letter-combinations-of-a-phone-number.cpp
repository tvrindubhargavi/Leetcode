class Solution {
public:
void solve(int idx, string &digits, map<int,string>&mpp,vector<string>&fa,string &s, int n){
    if(idx>=n){
        fa.push_back(s);
        return;
    }
    for(auto i:mpp[digits[idx]-'0']){
        s.push_back(i);
        solve(idx+1,digits,mpp,fa,s,n);
        s.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        map<int,string>mpp;
        mpp[2]="abc";
        mpp[3]="def";
        mpp[4]="ghi";
        mpp[5]="jkl";
        mpp[6]="mno";
        mpp[7]="pqrs";
        mpp[8]="tuv";
        mpp[9]="wxyz";
    vector<string>fa;
    string s="";
    solve(0,digits,mpp,fa,s,digits.size());
    return fa;
    }
};