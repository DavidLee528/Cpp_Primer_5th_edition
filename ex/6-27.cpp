/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>

using namespace std; 

int TemplateSum(initializer_list<int> il); 

int main() {
    // initializer_list<int> lst; 
    // while (cin >> )
    //     ; 

    // 必须用花括号括起来
    cout << TemplateSum({ 1, 2, 3 }) << endl; 
    return 0; 
}

int TemplateSum(initializer_list<int> il) {
    int sum; 
    for (const int *i = il.begin(); i != il.end(); i++) {
        sum += *i; 
    }
    return sum; 
}