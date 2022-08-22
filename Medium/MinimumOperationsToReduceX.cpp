class Solution {
public:
    int solution(int start, int end, vector<int>& nums, int x, int cnt,  vector<vector<int>>& dp) {
        if(x == 0) {
            return cnt;
        }
        if(start > end) return 1e9;
        
        if(dp[start][end] != -1) return dp[start][end];

        int first = solution(start+1,end, nums, x-nums[start],cnt+1,dp);
        int last = solution(start, end-1, nums, x-nums[end],cnt+1,dp);
        return dp[start][end] = min(first,last);
    }
    int minOperations(vector<int>& nums, int x) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(),-1));
        int res = solution(0,nums.size()-1,nums,x,0,dp);
        if(res >= 1e9) return -1;
        return res;
    }
};
