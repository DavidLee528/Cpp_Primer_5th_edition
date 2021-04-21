/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210210
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <list>

using namespace std; 

int main() {
    list<string> lst; 
    for (string str; cin >> str; lst.push_back(str))
        ; 
    for (list<string>::const_iterator iter = lst.cbegin(); iter != lst.cend(); ++iter) 
        cout << *iter << endl; 
    return 0; 
}