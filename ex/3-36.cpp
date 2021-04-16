/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210118
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<vector>
#include<string>

using namespace std; 

bool VecEql(vector<int> vec1, vector<int> vec2); 

int main() {
    vector<int> iv1(10, 2); 
    vector<int> iv2(10, 1); 
    cout << VecEql(iv1, iv2) << endl; 
    return 0; 
}

bool VecEql(vector<int> vec1, vector<int> vec2) {
    // vector<int>::size_type minisize = vec1.size() < vec2.size() ? vec1.size() : vec2.size(); 
    vector<int>::iterator itVec1 = vec1.begin(); 
    vector<int>::iterator itVec2 = vec2.begin(); 
    while (itVec1 != vec1.end() && itVec2 != vec2.end()) {
        if (*itVec1 != *itVec2) return false; 
        ++itVec1; 
        ++itVec2; 
    }
    return true; 
}
