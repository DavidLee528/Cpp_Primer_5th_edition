/*
 * @ Author: 李天昊
 * @ Description: 测试IO条件状态
 * @ Date: 20210201
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std; 

istream & func(istream &is); 

int main() {
    func(cin); 
    return 0; 
}

istream & func(istream &is) {
    string ss; 
    while (is >> ss) {
        cout << ss << endl; 
    }
    is.clear(); 
    return is; 
}