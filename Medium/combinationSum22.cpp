class Solution {
public:
    void solution(int ind, vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& temp) {
        if(target == 0) {
            res.push_back(temp);
            return;
        }
        for(int i = ind; i < candidates.size(); i++) {
            if(i>ind && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]<=target) {
                temp.push_back(candidates[i]);
                solution(i+1,candidates, target-candidates[i],res, temp);
                temp.pop_back();
            }
        }        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        solution(0,candidates,target,res,temp);
        return res;
    }
};
