/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */
#include<iostream>
using namespace std; 

int main() {
    int val = 0; 
    int currVal = 0; 
    if (cin >> currVal) {
        int cnt = 1; 
        while (cin >> val) {
            if (val == currVal) {
                ++ cnt; 
            }
            else {
                cout << currVal << " Occurs " << cnt << " Times" << endl; 
                currVal = val; 
                cnt = 1; 
            }
        }
        cout << currVal << " Occurs " << cnt << "Times" << endl; 
    }
    return 0; 
}