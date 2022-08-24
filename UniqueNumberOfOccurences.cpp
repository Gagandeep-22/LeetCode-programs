class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int a:arr) {
            mp[a]++;
        }
        vector<int> counts(mp.size());
        int i = 0;
        for(auto m:mp) {
            if(find (counts.begin(), counts.end(), m.second) != counts.end())
                return false;
            counts[i] = m.second;
            i++;
        }
        return true;
    }
};
