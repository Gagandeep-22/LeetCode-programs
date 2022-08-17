class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mp;
        for(char a:allowed) mp[a]++;
        int count = 0;
        for(string w:words) {
            bool flag = true;
            for(char ch:w) {
                if(mp.find(ch) == mp.end())
                    flag = false;
            }
            if(flag == true) count++;
        }
        return count;
    }
};
