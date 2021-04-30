/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

void ElimDups(vector<string> & words); 

int main() {
    vector<string> sv{"hello", "world", "hello", "david"}; 
    ElimDups(sv); 
    for (auto i : sv) cout << i << ' '; 
    cout << endl; 
    return 0; 
}

void ElimDups(vector<string> & words) {
    // 按照字典顺序排序
    // 留给unique重排函数备用
    sort(words.begin(), words.end()); 

    // 向unique重排函数输入范围
    // 函数返回指向不重复区域尾后元素的迭代器
    vector<string>::iterator endUnique = unique(words.begin(), words.end()); 

    // 标准库算法不进行容器操作，不能改变容器大小
    // 故使用向量操作erase删除重复单词
    words.erase(endUnique, words.end()); 
}