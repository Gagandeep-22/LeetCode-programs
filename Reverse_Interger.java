class Solution {
    public int reverse(int x) {
        int n = x;
        int rev = 0, rem;
        int sign = 1;
        if(n<0)
        {
            sign = -1;
            n=n*sign;
        }
        while(n!=0)
        {
            if(rev * sign > Integer.MAX_VALUE / 10 || rev * sign < Integer.MIN_VALUE / 10)
            {
                return 0;       
            }
            
            rem = n%10;
            rev = (rev*10)+rem;
            n = n/10;
        }
        x = sign*rev;
        return x;
    }
}
