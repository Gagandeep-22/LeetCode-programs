class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        //BRUTE FORCE
        
        // int count =0;
        // for(int i = 0; i < nums.size()-1; i++) {
        //     for(int j = i+1; j < nums.size(); j++) {
        //         if(nums[i] == nums[j] && (i*j)%k==0) 
        //             count++;
        //     }
        // }
        // return count;
        
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int count=0, n=nums.size();
        for(int i=0;i<n;i++){
            if(mp[nums[i]] == 1)
                continue;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]  &&  ((i*j)%k==0))
                    count++;
            }
        }
        return count;

    }
};
