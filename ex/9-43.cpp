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
    string::iterator curr = s.begin(); 
    while (curr != s.end() - oldVal.size()) {
        if (oldVal == string(curr, curr + oldVal.size())) {
            curr = s.erase(curr, curr + oldVal.size()); 
            curr = s.insert(curr, newVal.begin(), newVal.end()); 
            curr += newVal.size(); 
        } 
        else {
            ++curr; 
        }
    }
}