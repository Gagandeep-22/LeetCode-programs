class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(), array.end());
        int num = 1;
        for(int a:array) {
            if(num != a) return num;
            else num++;
        }
        return num;
    }
};
