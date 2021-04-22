/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210211
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <forward_list>

using namespace std; 

void FindAndInsert(forward_list<string> & flst, const string & dst, const string * src); 

int main() {
    forward_list<string> lst{"hello", "world"}; 
    FindAndInsert(lst, "hello", ", "); 
    FindAndInsert(lst, "world", "! "); 
    for (auto i : lst) cout << i ; 
    cout << endl; 
    return 0; 
}

void FindAndInsert(forward_list<string> & flst, const string & dst, const string & src) {    
    forward_list<string>::iterator prev = flst.before_begin(); 
    forward_list<string>::iterator curr = flst.begin(); 
    while (curr != flst.end()) {
        if (*curr == dst) {
            flst.insert_after(curr, src); 
            return ; 
        }
        prev = curr++; 
    }
    flst.insert_after(prev, src); 
    return ; 
}