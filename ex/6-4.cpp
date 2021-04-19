/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int Fact(int n) {
    if (n == 1) return 1; 
    return n * Fact(n - 1); 
}

int main() {
    int num; 
    cin >> num; 
    cout << Fact(num) << endl; 
    return 0; 
}

