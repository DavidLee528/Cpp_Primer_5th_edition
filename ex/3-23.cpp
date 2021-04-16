/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<vector>

using namespace std; 

constexpr size_t SIZE_INT_VEC = 10; 

int main() {
    vector<int> iv(SIZE_INT_VEC, 3); 

    for (vector<int>::iterator i = iv.begin(); i != iv.end(); ++i) {
        *i *= 2; 
        cout << *i << ' '; 
    }
    cout << endl; 
    for (vector<int>::reverse_iterator i = iv.rbegin(); i != iv.rend(); ++i) {
        cout << *i << ' '; 
    }
    cout << endl; 
    return 0; 
}