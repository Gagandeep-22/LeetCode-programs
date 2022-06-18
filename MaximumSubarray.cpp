class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int temp = nums[0] ;
        for(int i = 1; i < nums.size(); i++)
        {
            if(temp+nums[i]<nums[i])
                temp = nums[i];
            else
                temp+=nums[i];
            if(temp>sum)
                sum = temp;
        }
        return sum;
    }
};
