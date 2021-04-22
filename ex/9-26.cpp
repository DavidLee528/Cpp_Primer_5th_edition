/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210210
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>
#include <list>

using namespace std; 

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89}; 
    vector<int> ivec; 
    list<int> ilst; 
    for (auto i : ia) {
        ivec.push_back(i); 
        ilst.push_back(i); 
    }
    
    vector<int>::iterator iter_vec; 
    iter_vec = ivec.begin(); 
    while (iter_vec != ivec.end()) {
        // 若是非奇数
        if (!(*iter_vec & 0x1)) ivec.erase(iter_vec++); 
    }
    list<int>::iterator iter_lst; 
    iter_lst = ilst.begin(); 
    while (iter_lst != ilst.end()) {
        // 若是奇数
        if (*iter_lst & 0x1) ilst.erase(iter_lst++); 
    }

    for (auto i : ivec) cout << i << ' '; 
    cout << endl; 
    for (auto i : ilst) cout << i << ' '; 
    cout << endl;
    return 0; 
}