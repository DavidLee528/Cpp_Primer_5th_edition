/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210210
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <deque>

using namespace std; 

int main() {
    deque<string> sd; 
    // string str; 
    // while (cin >> str) {
    //     sd.push_back(str); 
    // }
    for (string str; cin >> str; sd.push_back(str))
        ; 
    for (deque<string>::const_iterator iter = sd.cbegin(); iter != sd.cend(); ++iter) 
        cout << *iter << endl; 
    return 0; 
}