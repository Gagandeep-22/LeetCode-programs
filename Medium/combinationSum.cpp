class Solution {
public:
    void solution(int i, vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& temp) {
        if(i==candidates.size()) {
            if(target == 0) {
                res.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            solution(i,candidates, target-candidates[i],res, temp);
            temp.pop_back();
        }
        solution(i+1,candidates,target,res, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        solution(0,candidates,target,res,temp);
        return res;
    }
};
