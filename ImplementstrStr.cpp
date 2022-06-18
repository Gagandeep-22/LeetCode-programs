class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        int n = haystack.length();
        int m = needle.length();
        int res=-1;
        if(m>n){
            return -1;
        }
        for(int k = 0; k<n; k++){
            if(haystack[k]==needle[j]){
                j++;
                if(res==-1)res=k;
            }
            else if(j>0){
                j=0;
                k=res;
                res=-1;
            }
            if(j==m)break;
        }
        return (j==m)?res:-1;
    }
};
