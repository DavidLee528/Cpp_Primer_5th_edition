/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<string>

using namespace std; 

inline bool isShorter(const string &s1, const string &s2); 

int main() {
    string str1 = "abcdefg"; 
    string str2 = "hello"; 
    cout << isShorter(str1, str2) << endl; 
    return 0; 
}

inline bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size(); 
}