/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210209
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>

using namespace std; 

int main() {
    vector<int> iv1; 
    vector<int> iv2(10); 
    vector<int> iv3(10, 1); 
    vector<int> iv4{1, 2, 3, 4, 5}; 
    vector<int> iv5(iv4); 
    vector<int> iv6(iv4.begin() + 1, iv4.end() - 1); 

    for (vector<int>::const_iterator i = iv6.cbegin(); i != iv6.cend(); ++i) {
        cout << *i << endl; 
    }

    return 0; 
}