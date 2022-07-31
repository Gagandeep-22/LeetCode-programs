class Solution {
public:
    void solution(int i, vector<int>& arr, int k, int n, vector<int>& temp, vector<vector<int>>& res) {
        if(i == arr.size()) {
            if(temp.size() == k) {
                if(n == 0)
                {
                    res.push_back(temp);
                }
            }
            return;
        }
        if(arr[i]<=n) {
            temp.push_back(arr[i]);
            solution(i+1, arr, k, n-arr[i], temp, res);
            temp.pop_back();
        }
        solution(i+1, arr, k, n, temp, res);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        vector<int> temp;
        vector<vector<int>> res;
        if(k>n)
            return res;
        for(int i = 1; i < 10; i++)
        {
            arr.push_back(i);
        }
        solution(0, arr, k, n, temp, res);
        return res;
    }
};
