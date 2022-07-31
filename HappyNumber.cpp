class Solution {
public:
    int squareNumber(int n) {
        int sum = 0;
        while(n>0) {
            sum+=(pow((n%10), 2));
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> s;
        while(1) {
            n = squareNumber(n);
            if(n==1)
                return true;
            if(s.find(n) != s.end())
                return false;
            s.insert(n);
        }
    }
};
