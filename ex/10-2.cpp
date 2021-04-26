/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <algorithm>
#include <list>

using namespace std; 

int main() {
    string val = "hello"; 
    list<string> sl{"hello", "world", "hello", "david", "hello"}; 
    auto cnt = count(sl.cbegin(), sl.cend(), val); 
    cout << "the string \"" << val; 
    cout << "\" appears " << cnt << " times. "; 
    cout << endl; 
    return 0; 
}