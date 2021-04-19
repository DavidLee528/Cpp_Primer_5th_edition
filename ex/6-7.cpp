/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

size_t CountCalls(); 

int main() {
    for (int i = 0; i < 10; ++i) {
        CountCalls(); 
    }
    cout << CountCalls() << endl; 
    return 0; 
}

size_t CountCalls() {
    // 静态局部对象
    static size_t cnt = 0; 
    return ++cnt; 
}