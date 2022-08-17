class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string> dp;
        dp['a'] = ".-";
        dp['b'] = "-...";
        dp['c'] = "-.-.";
        dp['d'] = "-..";
        dp['e'] = ".";
        dp['f'] = "..-.";
        dp['g'] = "--.";
        dp['h'] = "....";
        dp['i'] = "..";
        dp['j'] = ".---";
        dp['k'] = "-.-";
        dp['l'] = ".-..";
        dp['m'] = "--";
        dp['n'] = "-.";
        dp['o'] = "---";
        dp['p'] = ".--.";
        dp['q'] = "--.-";
        dp['r'] = ".-.";
        dp['s'] = "...";
        dp['t'] = "-";
        dp['u'] = "..-";
        dp['v'] = "...-";
        dp['w'] = ".--";
        dp['x'] = "-..-";
        dp['y'] = "-.--";
        dp['z'] = "--..";
        unordered_map<string, int> count;
        for(string word:words) {
            string mCode = "";
            for(auto ch:word) {
                mCode+= dp[ch];
            }
            count[mCode]++;
        }
        int res = 0;
        for(auto r:count) res++;
        return res;
    }
};



// Without HashMap
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_set<string> s;
        for (auto w : words) {
            string code;
            for (auto c : w) code += d[c - 'a'];
            s.insert(code);
        }
        return s.size();
    }
