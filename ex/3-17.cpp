/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210118
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<string>
#include<vector>

using namespace std; 

int main() {
    vector<string> sv; 
    string s; 
    while (cin >> s) {
        if (!s.empty()) {
            for (auto &i : s) {
                i = toupper(i); 
            }
            sv.push_back(s); 
        }
    }
    vector<string>::size_type sz = sv.size(); 
    for (vector<string>::size_type i = 0; i < sz; i++) {
        cout << sv[i] << ' '; 
    }
    cout << endl; 
    return 0; 
}