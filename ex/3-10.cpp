/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
using namespace std; 

int main() {
    string str; 
    getline(cin, str); 
    for ( auto &c : str ) {
        if ( ispunct(c) ) {
            c = ' '; 
        }
    }
    cout << str << endl; 
    return 0; 
}