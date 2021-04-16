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
        for (vector<int>::size_type i = 0 ; i < sz - 1; i += 2) {
            cout << iv[i] + iv[i + 1] << ' '; 
        }
    }
    else {
        for (vector<int>::size_type i = 0 ; i < sz - 2; i += 2) {
            cout << iv[i] + iv[i + 1] << ' '; 
        }
        cout << iv[sz - 1]; 
    }
    cout << endl; 
    return 0; 
}