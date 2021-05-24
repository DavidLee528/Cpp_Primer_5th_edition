/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210214
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>

using namespace std; 

int main() {
    int x = 10; 
    int n; 
    cout << "10 + "; 
    cin >> n; 
    cout << "= "; 
    auto Add = [x](const int input) -> int {
        return x + input; 
    }; 
    cout << Add(n) << endl; 
    return 0; 
}