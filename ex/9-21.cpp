/*
 * @ Author: 李天昊
 * @ Description: push_front等价形式
 * @ Date: 20210210
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main() {
    vector<string> vec; 
    vector<string>::iterator iter = vec.begin(); 
    string word; 
    while (cin >> word) {
        iter = vec.insert(iter, word); 
    }
    for (auto i : vec) cout << i << ' '; 
    cout << endl; 
    return 0; 
}