/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<string>

using namespace std; 

bool Func1(const string s1); 
void Func2(string &s2); 

int main() {
    string str = "abcDeFG"; 
    // cout << Func1(str) << endl; 
    Func2(str); 
    cout << str << endl; 
    return 0; 
}

/**
 * @brief 判断string对象中是否含有大写字母
 *  若有大写字母，则返回值为假
 * @param s1 一个无需被修改的string对象
 */
bool Func1(const string s1) {
    string::size_type len = s1.size(); 
    for (string::size_type i = 0; i < len; i++) {
        if (!islower(s1[i])) return false; 
    }
    return true; 
}

/**
 * @brief 将string对象所有大写字母全部改写为小写字母
 * 
 * @param s2 一个需要被修改的string对象
 */
void Func2(string &s2) {
    string::size_type len = s2.size(); 
    for (string::size_type i = 0; i < len; i++) {
        if (!islower(s2[i])) s2[i] = tolower(s2[i]); 
    }
}