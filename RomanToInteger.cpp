class Solution {
public:
    int romanToInt(string s) {
        map<char, int> Roman;
        Roman['I'] = 1;
        Roman['V'] = 5;
        Roman['X'] = 10;
        Roman['L'] = 50;
        Roman['C'] = 100;
        Roman['D'] = 500;
        Roman['M'] = 1000;
        int res = Roman.at(s.at(s.length()-1));
        for(int i = s.length()-2; i >= 0; i--) {
            if(Roman.at(s.at(i)) < Roman.at(s.at(i+1))){
                res-=Roman.at(s.at(i));
            }
            else {
                res+=Roman.at(s.at(i));
            }
        } 
        return res;
    }
};
