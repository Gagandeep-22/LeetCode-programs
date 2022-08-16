class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> cnt;
        for (int i : arr) cnt[i]++;
        
        vector<int> frequencies;
        for (auto [_, freq] : cnt) frequencies.push_back(freq);
        
        sort(frequencies.begin(), frequencies.end());
        
        int res = 0, removed = 0, half = arr.size() / 2, i = frequencies.size() - 1;
        while (removed < half) {
            res++;
            removed += frequencies[i--];
        }
        return res;
    }
};
