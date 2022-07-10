class Solution {
public:
    int helper(int m,int n,vector<vector<int>> &arr)
    {
        if(m==0 && n==0)
            return 1;
        if(m<0 || n<0)
            return 0;
        if(arr[m][n]!=-1)
            return arr[m][n];
        int a=helper(m-1,n,arr);
        int b=helper(m,n-1,arr);
        return arr[m][n]=a+b;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> arr(m,vector<int> (n,-1));
        return helper(m-1,n-1,arr);
    }
};
