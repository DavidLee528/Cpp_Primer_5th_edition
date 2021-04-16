/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */
#include<iostream>
using namespace std; 

int main() {
    string line; 
    while ( getline(cin, line) ) {
        string::size_type len = line.size(); 
        cout << "The length of \"" << line << "\" is " << len << endl; 
    }
    return 0; 
}