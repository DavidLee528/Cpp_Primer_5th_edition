/*
 * @ Author: 李天昊
 * @ Description: 接收本节所示的选项
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int main(int argc, char **argv) {
    cout << argv << ' ' << *argv << ' ' << *(*argv + 2) << endl; 
    for (int i = 0; i < argc - 1; i++) {
        cout << "Parameter " << i + 1 << " is: " << *(argv + i + 1) << endl; 
    }
    return 0; 
}
