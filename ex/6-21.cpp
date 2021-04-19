/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int Compare(int *p, int n); 

int main() {
    int n1, n2; 
    cin >> n1 >> n2; 
    cout << Compare(&n1, n2) << endl; 
    return 0; 
}

int Compare(int *p, int n) {
    return (*p > n ? *p : n); 
}