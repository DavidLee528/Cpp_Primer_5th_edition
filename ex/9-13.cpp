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

    list<int> ilst(5, 4); 
    vector<int> ivec(5, 5); 
    
    // 两个迭代器创建拷贝的构造函数
    // 只需要元素类型能够相互转换
    // 容器类型和元素类型可以不同
    vector<double> dvec1(ilst.begin(), ilst.end()); 
    vector<double> dvec2(ivec.begin(), ivec.end()); 

    return 0; 

}