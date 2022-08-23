class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int maxi = 1;
        int mini = 1;
        for(int n:nums) {
            if(n<0) 
                swap(maxi,mini);
            maxi = max(n, n*maxi);
            mini = min(n, n*mini);
            res = max(res,maxi);
        }
        
        return res;
    }
};
