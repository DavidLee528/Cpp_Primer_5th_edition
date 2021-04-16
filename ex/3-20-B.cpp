/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210118
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<vector>

using namespace std; 

int main() {
    vector<int> iv; 
    int num; 
    while (cin >> num) {
        iv.push_back(num); 
    }
    vector<int>::size_type sz = iv.size(); 
    if (sz % 2 == 0) {
        for (vector<int>::size_type i = 0; i < sz / 2; i++) {
            cout << iv[i] + iv[sz - 1 - i] << ' '; 
        }
    }
    else {
        for (vector<int>::size_type i = 0; i <= (int)(sz / 2); i++) {
            cout << iv[i] + iv[sz - 1 - i] << ' '; 
        }
    }
    cout << endl; 
    return 0; 
}