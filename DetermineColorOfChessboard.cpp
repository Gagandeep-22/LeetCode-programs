class Solution {
public:
    bool squareIsWhite(string coordinates) {
        unordered_map<char, int> mp;
        mp['a'] = 1;
        mp['b'] = 0;
        mp['c'] = 1;
        mp['d'] = 0;
        mp['e'] = 1;
        mp['f'] = 0;
        mp['g'] = 1;
        mp['h'] = 0;
        mp['1'] = 1;
        mp['2'] = 0;
        mp['3'] = 1;
        mp['4'] = 0;
        mp['5'] = 1;
        mp['6'] = 0;
        mp['7'] = 1;
        mp['8'] = 0;
        if(mp[coordinates[0]]!=mp[coordinates[1]])
            return true;
        return false;
    }
};

// Second approach

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (((int)coordinates[0] + (int)coordinates[1]) % 2 == 0) ? false : true;
    }
};
