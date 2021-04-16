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
    int num; 
    vector<int> iv; 
    while (cin >> num) {
        iv.push_back(num); 
    }
    vector<int>::size_type sz = iv.size(); 
    for (vector<int>::size_type i = 0; i < sz; i++) {
        cout << iv[i] << endl; 
    }
    return 0; 
}