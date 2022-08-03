class Solution {
public:
    
    /* BRUTE FORCE */
    // vector<int> targetIndices(vector<int>& nums, int target) {
    //     sort(nums.begin(), nums.end());
    //     vector<int> res;
    //     for(int i = 0; i < nums.size(); i++) {
    //         if(nums[i] == target) {
    //             res.push_back(i);
    //         }
    //     }
    //     return res;
    // }
    
    vector<int> targetIndices(vector<int>& nums, int target) { 
        //we don't have to sort the whole array
        int targetCount = 0;
        int lessThanTargetCount = 0;
        int start;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) { 
            if(nums[i] == target)
                targetCount++;
            if(nums[i] < target)
                lessThanTargetCount++;
        }
        start = lessThanTargetCount;
        while(targetCount > 0) {
            res.push_back(start);
            start++;
            targetCount--;
        }
        return res;
    }
};
