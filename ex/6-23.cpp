/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

void MyPrint(int *arr, size_t size); 

int main() {
    int i = 0; 
    int j[2] = { 1, 2 }; 
    cout << "first print" << endl; 
    MyPrint(&i, 1); 
    cout << "second print" << endl; 
    MyPrint(j, sizeof(j) / sizeof(int)); 
    return 0; 
}

void MyPrint(int *arr, size_t size) {
    // for (auto elem : arr) {
    //     cout << elem << endl; 
    // }
    for (size_t i = 0; i < size; i++) {
        cout << *(arr + i) << endl; 
    }
}