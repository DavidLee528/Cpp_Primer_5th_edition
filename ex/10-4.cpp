/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <numeric>
#include <vector>

using namespace std; 

int main() {
    vector<double> dv {1.0, 2.0, 3.0}; 
    auto sum = accumulate(dv.cbegin(), dv.cend(), 0.0); 
    cout << sum << endl; 
    return 0; 
}