class Solution {
public:
    bool solution(vector<int>& nums, int pos, vector<int>& dp) {
        if(pos == nums.size()-1) 
            return true;
        if(pos > nums.size()-1 || nums[pos] == 0)
            return dp[pos]=false;
        if(dp[pos]!=-1)
            return dp[pos];
        for( int i = 1; i <= nums[pos]; i++)
        {
            if(solution(nums, pos+i, dp))
                return dp[i]=true;
        }
        return dp[pos] = false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solution(nums, 0, dp);
    }
};
