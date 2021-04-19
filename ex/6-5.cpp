/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

unsigned AbsVal(int n); 

int main() {
    int num; 
    cin >> num; 
    cout << AbsVal(num) << endl; 
    return 0; 
}

unsigned AbsVal(int n) {
    if (n < 0) return -n; 
    return n; 
}