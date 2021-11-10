class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length())
        {
            return false;
        }
        int alpha1[] = new int[26];
        Arrays.fill(alpha1, 0);
        for(int i = 0; i < s.length(); i++)
        {
            alpha1[(int)s.charAt(i)-97]++;
        }
        int alpha2[] = new int[26];
        Arrays.fill(alpha2, 0);
        for(int i = 0; i < s.length(); i++)
        {
            int n = 
            alpha2[(int)t.charAt(i)-97]++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(alpha1[i]!=alpha2[i])
            {
                return false;
            }
        }
        return true;
    }
}
