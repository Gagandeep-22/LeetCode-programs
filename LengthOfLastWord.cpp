class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int mark = false;
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(mark == false)
            {
                if(s[i]==' ')
                    continue;
                else
                    mark=true;
            }
            if(mark == true)
            {
                if(s[i]!=' ')
                    count++;
                else
                    break;
            }
            
        }
        return count;
    }
};
