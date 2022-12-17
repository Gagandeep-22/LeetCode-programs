class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0;
        for(int n:nums) {
            mp[n]++;
        }
        for(auto i:mp) {
            if(i.second == 1) {
                sum += i.first;
            }
        }
        return sum;
    }
};
