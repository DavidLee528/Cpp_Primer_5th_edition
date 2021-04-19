/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210119
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

void ResetInt(int &n); 

int main() {
    int num = 123; 
    cout << "num = " << num << endl; 
    ResetInt(num); 
    cout << "num = " << num << endl; 
    return 0; 
}

void ResetInt(int &n) {
    n = 0; 
}