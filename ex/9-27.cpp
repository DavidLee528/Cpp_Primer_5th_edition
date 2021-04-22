/*
 * @ Author: 李天昊
 * @ Description: 查找并删除单向链表中的奇数元素
 * @ Date: 20210211
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <forward_list>

using namespace std; 

int main() {
    forward_list<int> flst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    forward_list<int>::iterator prev = flst.before_begin(); 
    forward_list<int>::iterator curr = flst.begin(); 
    while (curr != flst.end()) {
        // 判断是否为奇数
        if (*curr & 0x1) {
            curr = flst.erase_after(prev); 
        } 
        else {
            prev = curr++; 
        }
    }
    for (auto i : flst) cout << i << ' '; 
    cout << endl; 
    return 0; 
}