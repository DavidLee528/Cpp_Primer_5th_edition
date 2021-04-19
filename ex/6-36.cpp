/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int main() {
    return 0; 
}

// 编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象
// 不要使用尾置返回类型、decltype或者类型别名
string (&func(string (&arrStr)[10]))[10] {
    // statement
}