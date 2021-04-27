/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int main() {

    vector<int> iv{1, 2, 3, 4, 5, 6}; 

    cout << "before fill_n(): "; 
    for (auto i : iv) cout << i << ' '; 
    cout << endl; 
    
    fill_n(iv.begin(), iv.size(), 0); 

    cout << "after fill_n(): "; 
    for (auto i : iv) cout << i << ' '; 
    cout << endl; 
    
    return 0; 
}