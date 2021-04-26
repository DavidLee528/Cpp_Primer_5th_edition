/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <algorithm>
#include <numeric>   // numeric 数值的
#include <vector>

using namespace std; 

int main() {
    vector<int> iv {
        1, 12, 123, 12345, 123456, 1234567, 12345678, 123456789, 1234567890
    }; 
    auto sum = accumulate(iv.cbegin(), iv.cend(), 0); 
    cout << sum << endl; 
    return 0; 
}