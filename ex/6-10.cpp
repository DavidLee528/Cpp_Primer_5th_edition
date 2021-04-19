/*
 * @ Author: 李天昊
 * @ Description: 编写一函数，使用指针形参交换两个整数的值
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

void PtrSwap(int *p1, int *p2); 

int main() {
    int n1 = 1; 
    int n2 = 2; 
    cout << "n1 = " << n1 << "  n2 = " << n2 << endl; 
    PtrSwap(&n1, &n2); 
    cout << "n1 = " << n1 << "  n2 = " << n2 << endl; 
    return 0; 
}

void PtrSwap(int *p1, int *p2) {
    int tmp = *p1; 
    *p1 = *p2; 
    *p2 = tmp; 
}