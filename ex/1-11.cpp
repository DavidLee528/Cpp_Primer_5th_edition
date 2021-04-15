/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */
#include<iostream>
using namespace std; 

int main() {
    cout << "Enter Two Integers" << endl; 
    int n1, n2; 
    cin >> n1 >> n2; 
    if (n1 < n2) {
        for (int i = n1; i <= n2; i++) {
            cout << i << ' '; 
        }
    }
    else if (n1 == n2) {
        cout << n1; 
    }
    else {
        for (int i = n2; i <= n1; i++) {
            cout << i << ' '; 
        }
    }
    return 0; 
}