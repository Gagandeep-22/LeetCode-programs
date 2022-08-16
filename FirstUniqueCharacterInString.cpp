//Sliding window (Two Pointer) - O(N^2) Approach

class Solution {
public:
    bool isPresent(char a, vector<char>& dp) {
        for(char d:dp) {
            if(d == a) return true;
        }
        return false;
    }
    int firstUniqChar(string s) {
        if(s.length() == 1) return 0;
        int left = 0;
        int right = 1;
        vector<char> dp;
        while(left<s.length()) {
            dp.push_back(s[left]);
            if(s[right] != s[left]) {
                right++;
            }
            else {
                while(isPresent(s[++left],dp)); 
                right = left + 1;
            }
            if(right == s.length())
                return left;
        }
        return -1;
    }
};


// HashMap - O(N + 26) Approach
