class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int left = 0;
        int right = nums.size()-1;
        unordered_map<int,int> mp;
        for(int i = operations.size()-1; i >= 0 ; i--) {
            if(mp.find(operations[i][1])!=mp.end()) {
                mp[operations[i][0]] = mp[operations[i][1]];
            }
            else 
                mp[operations[i][0]] = operations[i][1];
        }
        for(int j = 0; j < nums.size(); j++)  { 
            if(mp.find(nums[j]) != mp.end()) {
                nums[j] = mp[nums[j]];
            }
        }
        return nums;
    }
};
