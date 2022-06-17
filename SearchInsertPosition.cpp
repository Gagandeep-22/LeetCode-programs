class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid =0;
        int low = 0;
        int res = 0;
        int high = nums.size()-1;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low = mid +1;
                res = low;
            }
            else
            {
                high = mid-1;
                res = high+1;
            }
        }
        return res;
    }
};
