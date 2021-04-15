/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */
#include<iostream>
using namespace std; 

int main() {
    int val = 10; 
    int sum = 0; 
    while (val >= 0) {
        sum += val; 
        -- val; 
    }
    cout << sum << endl; 
    return 0; 
}