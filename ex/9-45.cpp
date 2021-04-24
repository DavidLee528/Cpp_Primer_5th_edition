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
    cout << AddPreAndSuffix(name, "Mr. ", " Lee") << endl; 
    return 0; 
}

string AddPreAndSuffix(string &s, const string &pre, const string &suf) {
    s.insert(s.begin(), pre.begin(), pre.end()); 
    return s.append(suf); 
}