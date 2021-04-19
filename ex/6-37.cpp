/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<string>

using namespace std; 

int main() {
    return 0; 
}

// 编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象
// 不要使用尾置返回类型、decltype或者类型别名
string (&func1(string (&arrStr)[10]))[10] {
    // statement
}

// 编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象
// 使用类型别名
typedef string strT[10];    // strT是一个别名，它表示的类型是含有10个string对象的数组
strT &func2(strT &arrStr) {
    // statement
}

// 编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象
// 使用尾置返回类型
auto func2(string (&arrStr)[10]) -> string (&)[10] {
    // statement
}

// 编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象
// 使用decltype关键字
string arr[10]; 
decltype(arr) &func3(string (&arrStr)[10]) {
    // statement
}

