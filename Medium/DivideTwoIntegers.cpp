class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX; // only case where result is outside [-2^31, 2^31-1]
    int result = 0;
    bool negative = (dividend < 0) ^ (divisor < 0);
    if (dividend > 0) dividend = -dividend; // mirror everything to be negative, since it allows us to deal with
    if (divisor > 0) divisor = -divisor;    // one less edge case of -2^31 (because +2^31 doesn't exist and overflows)
    while (divisor >= dividend) {
        int x = divisor;
        int num = -1;
        while (x >= dividend-x) {
            x += x;
            num += num;
        }
        result += num;
        dividend -= x;
    }
    if (!negative) result = -result;
    return result;
}
};
