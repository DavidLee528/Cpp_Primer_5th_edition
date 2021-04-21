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
    deque<int> eve; 
    deque<int> odd; 
    for (list<int>::const_iterator iter = lst.cbegin(); iter != lst.cend(); ++iter) {
        if (*iter % 2 == 0) eve.push_back(*iter); 
        else odd.push_back(*iter); 
    }
    cout << "eve: "; 
    for (deque<int>::const_iterator iter = eve.cbegin(); iter != eve.cend(); ++iter) {
        cout << *iter << ' '; 
    }
    cout << endl << "odd: "; 
    for (deque<int>::const_iterator iter = odd.cbegin(); iter != odd.cend(); ++iter) {
        cout << *iter << ' '; 
    }
    cout << endl; 
    return 0; 
}