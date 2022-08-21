class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        long long res = 0;
        for(int i = 0; i < n; i++) 
        {
            res += a[i]*b[i];
        }
        return res;
    }
};
