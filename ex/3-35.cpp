/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210118
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

constexpr size_t MAX_INT = 10; 

int main() {
    int arr[MAX_INT] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 }; 
    int *begArr = begin(arr); 
    int *endArr = end(arr); 
    for (int *i = begArr; i < endArr; ++i) {
        *i = 1; 
        cout << *i << ' '; 
    }
    cout << endl;     
    return 0; 
}