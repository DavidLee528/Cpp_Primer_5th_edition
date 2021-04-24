/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210212
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>

using namespace std; 

string AddPreAndSuffix(string &s, const string &pre, const string &suf); 

int main() {
    string name("David"); 
    name = AddPreAndSuffix(name, "Mr. ", " Lee"); 
    cout << name << endl; 
    return 0; 
}

string AddPreAndSuffix(string &s, const string &pre, const string &suf) {
    s.insert(0, pre); 
    s.insert(s.size(), suf); 
    return s; 
}