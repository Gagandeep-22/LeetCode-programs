#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int n = s.length();
    if(s[n-2] == 'A') {
        if(s[0] == '1' && s[1] == '2') {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else {
        if(s[0] != '1' || s[1] != '2') {
            string hh = s.substr(0, 2);
            int h = stoi(hh);
            h += 12;
            hh = to_string(h);
            s[0] = hh[0];
            s[1] = hh[1];
        }
    }
    s.pop_back();
    s.pop_back();
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
