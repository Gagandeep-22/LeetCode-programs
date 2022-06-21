class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int> memo;
        for(auto i:nums){
            memo[i]++;
        }
        int lar = 0;
        int res = 0;
        for(auto i:memo){
            if(i.second>lar)
            {
                lar=i.second;
                res=i.first;
            }
        }
        return res;
    }
};
