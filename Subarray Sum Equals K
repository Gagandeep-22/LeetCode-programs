class Solution 
{
    public int subarraySum(int[] nums, int k) 
    {
        int sum = 0;
        int count = 0;
        for ( int j = 0; j < nums.length; j++)
        {
            for ( int i = j; i < nums.length; i++)
            {
                sum = sum + nums[i];
                if(sum == k)
                {
                    count++;
                }
                if(i == nums.length-1)
                {
                    sum = 0;
                }
            }
        }
        return count;
    }
}
