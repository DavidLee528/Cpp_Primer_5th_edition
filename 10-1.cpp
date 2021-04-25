/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main() {
    int val = 1; 
    vector<int> iv{1, 2, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 9, 0, 9, 9, 1, 9}; 
    auto cnt = count(iv.cbegin(), iv.cend(), val); 
    cout << "the number " << val; 
    cout << " appears " << cnt << " times. "; 
    cout << endl; 
    return 0; 
}