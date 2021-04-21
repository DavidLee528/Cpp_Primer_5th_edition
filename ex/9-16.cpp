/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210209
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>
#include <list>

using namespace std; 

int main() {
    vector<int> ivec1{1, 2, 3, 4, 5}; 
    vector<int> ivec_tmp; 
    list<int> ilst1{1, 2, 3, 4, 5}; 

    ivec_tmp.assign(ilst1.cbegin(), ilst1.cend()); 
    cout << (ivec1 == ivec_tmp ? "equal" : "not equal") << endl; 

    cout << (vector<int>(ilst1.cbegin(), ilst1.cend()) == ivec1 ? "equal" : "not equal") << endl; 

    return 0; 
}