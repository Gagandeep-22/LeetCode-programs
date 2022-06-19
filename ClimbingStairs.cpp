class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b=1;
        int c;
        for( int i = 0; i < n-1; i++)
        {
            c= a+b;
            b=a;
            a=c;
        }
        return a;
    }
};
