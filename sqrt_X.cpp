class Solution {
public:
    int mySqrt(int x) {
        long int i = 0;
        while(i*i <= x)
            i++;
        int j = i-1;
        return j;
    }
};
