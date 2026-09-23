class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>freq1;
        for(char ch: s){
            freq1[ch]++;
        }
    unordered_map<char,int>freq2;
    for(char ch:target){
        freq2[ch]++;
    }
    int mini=INT_MAX;
    for(auto &a:freq2){
        mini=min(mini,freq1[a.first]/a.second);
    }
    return mini;
    }
};