/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210118
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<vector>
#include<string>

using namespace std; 

constexpr size_t MAX_INT = 10; 

int main() {
    vector<int> iv; 
    int index = 0; 
    for (vector<int>::iterator i = iv.begin(); i != iv.end(); ++i) {
        *i = index++; 
    }
    return 0; 
}