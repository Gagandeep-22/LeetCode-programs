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
            counts[i] = m.second;
            i++;
        }
        unordered_map<int,int> cntFreq;
        for(int i:counts) 
        {
            if(cntFreq.find(i) != cntFreq.end())
                return false;
            cntFreq[i]++;
        }
        return true;
    }
};
