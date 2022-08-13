class Solution {
public:
    int solution(vector<int>& cost, int i, vector<int>& dp) {
        if(i > cost.size()-1) return 0;
        if(dp[i] != -1) return dp[i];
        int one = cost[i] + solution(cost, i+1, dp);
        int two = cost[i] + solution(cost, i+2, dp);
        
        return dp[i] = min(one,two);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(solution(cost, 0, dp),solution(cost, 1, dp));
    }
};
