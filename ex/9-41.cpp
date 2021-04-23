/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210211
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main() {
    vector<char> cv{'h', 'e', 'l', 'l', 'o'}; 
    string s(cv.begin(), cv.end()); 
    cout << s << endl; 
    return 0; 
}