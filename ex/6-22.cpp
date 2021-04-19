/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

void PointerSwap1(int *&p1, int *&p2); 

int main() {
    int n1 = 10; 
    int n2 = 20; 
    int *pn1 = &n1; 
    int *pn2 = &n2; 
    PointerSwap1(pn1, pn2); 
    cout << *pn1 << ' ' << *pn2 << endl; 
    return 0; 
}

// 指针的引用
void PointerSwap1(int *&p1, int *&p2) {
    int *tmp = p1; 
    p1 = p2; 
    p2 = tmp; 
}

// void PointerSwap2(int **p1, int **p2) {
    
// }