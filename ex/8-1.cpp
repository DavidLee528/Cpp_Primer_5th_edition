/*
 * @ Author: 李天昊
 * @ Description: IO条件状态
 * @ Date: 20210201
 * @ E-mail: 13121515269@163.com
 */

#include <string>
// 定义了基于读写流的基本类型
#include <iostream>
// 定义了读写命名文件的类型
#include <fstream>
// 定义了读写内存string对象的类型
#include <sstream>

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