/*
 * @ Author: 李天昊
 * @ Description: 递归函数，倒序输出vector中对象的内容
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<string>
#include<vector>

using namespace std; 

void GetVal(vector<int> v, int ix); 

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
    vector<int> vec(arr, arr + 10); 
    GetVal(vec, vec.size() - 1); 
    return 0; 
}

    // 模版作参数
void GetVal(vector<int> v, int ix) {
    // 若出界，则递归结束
    if (ix == -1) return ; 
    // 输出模版中对应位置的元素
    cout << v[ix] << endl; 
    // 自减ix
    ix--; 
    // 递归调用
    GetVal(v, ix); 
}
