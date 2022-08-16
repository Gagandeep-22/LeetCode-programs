class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> dp;
        for(char a:s) {
            dp[a]++;
            if(dp[a] == 2) return a;
        }
        return '-1';
    }
};
