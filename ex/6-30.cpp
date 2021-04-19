/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int main() {
    
    return 0; 
}

bool StringSubrange(const string &str1, const string &str2) {
    if (str1.size() == str2.size()) {
        return true; 
    }
    string::size_type minisize = str1.size() < str2.size() ? str1.size() : str2.size(); 
    for (string::size_type i = 0; i < minisize; i++) {
        if (str1[i] != str2[i]) {
            return false; 
        }
    }
    return true; 
}