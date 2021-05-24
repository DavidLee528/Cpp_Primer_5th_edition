/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210214
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

bool Predicate(const string & s); 

int main() {
    vector<string> sv{"abcd", "hello", "world", "david", "lee", "123"}; 

    // partition算法，接收一个谓词，对容器元素进行重排
    // 使得谓词为真的元素排列在前半部分
    // 返回指向最后一个使得谓词为真的元素的后面的迭代器
    vector<string>::iterator dema = partition(sv.begin(), sv.end(), Predicate); 

    for (vector<string>::const_iterator iter = sv.cbegin(); iter != dema; ++iter) {
        cout << *iter << ' '; 
    }
    cout << endl; 

    return 0; 
}

// 谓词函数
bool Predicate(const string & s) {
    return s.size() >= 5; 
}

