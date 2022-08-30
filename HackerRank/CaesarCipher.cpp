string caesarCipher(string s, int k) {
    int n = s.length();
    char char_arr[n];
    k = k%26;
    strcpy(char_arr, s.c_str());
    string sb;
    for(char c : char_arr){
        if(c>='a'&&c<='z'){
            int i = c-'a';
            i+=k;
            if(i>25){
                i-=26;
            }
            char temp = (char)('a'+i);
            sb.push_back(temp);
        }else if(c>='A'&& c<='Z'){
                int i = c-'A';
            i+=k;
            if(i>25){
                i-=26;
            }
            char temp = (char)('A'+i);
            sb.push_back(temp);
        }else{
            sb.push_back(c);
        }
    }
    
    return sb;
}
