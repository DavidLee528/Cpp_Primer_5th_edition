/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210209
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std; 

int main() {
    list<const char *> clst{"abc", "efg"}; 
    vector<string> svec; 
    svec.assign(clst.cbegin(), clst.cend()); 
    for (vector<string>::const_iterator i = svec.cbegin(); i != svec.cend(); ++i) {
        cout << *i << endl; 
    }
    return 0; 
}