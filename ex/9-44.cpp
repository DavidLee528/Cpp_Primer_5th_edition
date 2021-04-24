/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210212
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>

using namespace std; 

void Replace(string &s, const string &oldVal, const string &newVal); 

int main() {

    string s("To drive straight thru is a foolish, tho courageous act.");
    Replace(s,"tho","though");
    Replace(s, "thru", "through");

    cout << s << endl;

    return 0; 
}

void Replace(string &s, const string &oldVal, const string &newVal) {
    for (string::size_type pos = 0; pos <= s.size() - oldVal.size(); /* */) {
        if (s[pos] == oldVal[0] && s.substr(pos, pos + oldVal.size()) == oldVal) {
            s.replace(pos, oldVal.size(), newVal); 
            pos += newVal.size(); 
        }
        else {
            ++pos; 
        }
    }
}