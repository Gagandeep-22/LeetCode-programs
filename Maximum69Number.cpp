class Solution {
public:
    int changeDigit(int num, int i) {
        int firstHalf = num/i;
        int secondHalf = num%i;
        if(secondHalf > (7*(i/10))) 
            secondHalf = secondHalf-(3*(i/10));
        else
            secondHalf = secondHalf+(3*(i/10));
        return (firstHalf*i)+secondHalf;        
    }
    int maximum69Number (int num) {
        vector<int> dp;
        int n = num;
        int i = 1;
        while(n>0) {
            dp.push_back(changeDigit(num,i));
            n/=10;
            i*=10;
        }
        dp.push_back(changeDigit(num,i));
        int largest = INT_MIN;
        for(int a:dp)
        {
            if(a>largest)
                largest = a;
        }
        return largest;
    }
};
