/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

void SwapRef(int &n1, int &n2); 

int main() {
    int n1 = 111; 
    int n2 = 222; 
    cout << "n1 = " << n1 << "  n2 = " << n2 << endl; 
    SwapRef(n1, n2); 
    cout << "n1 = " << n1 << "  n2 = " << n2 << endl; 
    return 0; 
}

void SwapRef(int &n1, int &n2) {
    int tmp = n1; 
    n1 = n2; 
    n2 = tmp; 
}