class Solution {
public:
    int solution(int i, vector<int>& nums, vector<int>& dp) {
        if(i == 0) {
            return nums[i];
        }
        if(i < 0) return 0;
        if(dp[i] != -1) return dp[i];
        int notTake = 0 + solution(i-1, nums, dp);
        int take = 0;
        if(i >= 1)
            take = nums[i] + solution(i-2, nums, dp);
        return dp[i]=max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solution(n-1, nums, dp);
    }
};
