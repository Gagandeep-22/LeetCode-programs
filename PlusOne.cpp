class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1]+1 < 10)
        {
            digits[n-1]+=1;
            return digits;
        }
        digits[n-1]=0;
        if(n-1==0)
        {
            digits.insert(digits.begin(),1);
        }
        int carry = 1;
        int temp;
        for(int i = n-2; i >= 0; i--)
        {
            temp = digits[i]+carry;
            if(temp == 10)
            {
                digits[i]=0;
                carry=1;
                if(i==0)
                {
                    digits.insert(digits.begin(),1);
                }
            }
            else
            {
                digits[i]=temp;
                carry=0;   
            }
        }
        return digits;
    }
};
