/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210210
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <deque>
#include <list>

using namespace std; 

int main() {
    list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; 
    deque<int> odd; 
    deque<int> eve; 
    for (auto i : lst) (i & 0x1 ? odd : eve).push_back(i); 
    cout << "odd: "; 
    for (auto i : odd) cout << i << ' '; 
    cout << endl << "eve: "; 
    for (auto i : eve) cout << i << ' '; 
    cout << endl; 
    return 0; 
}