/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
using namespace std; 

int main() {
    string str1; 
    string str2; 
    cin >> str1 >> str2; 
    if ( str1 == str2 ) {
        cout << "equal" << endl; 
    }
    else if ( str1 > str2 ) {
        cout << str1 << endl; 
    }
    else {
        cout << str2 << endl; 
    }
    return 0; 
}