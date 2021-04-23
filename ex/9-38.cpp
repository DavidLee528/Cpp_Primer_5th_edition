/*
 * @ Author: 李天昊
 * @ Description: 探究vector是如何增长的
 * @ Date: 20210211
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>

using namespace std; 

int main() {
    vector <int> iv; 
    for (vector<int>::size_type ix = 0; ix != 100; ++ix) {
        cout << "[ iv ] size: " << iv.size() << "  capacity: " << iv.capacity() << endl; 
        iv.push_back(ix); 
    }
    return 0; 
}