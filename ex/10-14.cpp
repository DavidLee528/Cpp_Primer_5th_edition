/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210214
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>

using namespace std; 

int main() {
    int n1, n2; 
    cin >> n1 >> n2; 
    auto f = [](int lhi, int rhi) -> int {
        return lhi + rhi; 
    }; 
    cout << f(n1, n2) << endl; 
    return 0; 
}