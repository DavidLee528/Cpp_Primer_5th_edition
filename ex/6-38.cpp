/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int main() {

    return 0; 
}

int odd[] = { 1, 3, 5, 7, 9 }; 
int eve[] = { 0, 2, 4, 6, 8 }; 

decltype(odd) &arrRef(int i) {
    return (i % 2) ? &odd : &eve; 
}