class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = strs[0];
        int count;
        int flag;
        for(int i = 1; i < strs.size(); i++)
        {
            int j = 0;
            flag = true;
            count = 0;
            if(strs[i].length() != 0 && temp.length()!= 0)
            {
                while((temp.at(j) == strs[i].at(j))&& flag == true)
                {
                    count++;
                    if(j<strs[i].length()-1 && j<temp.length()-1)
                        j++;
                    else 
                        flag = false;
                }
                if(count == 0)
                {
                    return "";
                }
                temp = temp.substr(0,count);
            }
            else 
                return "";

        }
        return temp;
    }
};
