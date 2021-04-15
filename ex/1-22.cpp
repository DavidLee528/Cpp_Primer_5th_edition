/*
 * @ Author: 李天昊
 * @ Description: 读取多个相同ISBN的销售记录，并输出和
 * @ Date: 20210117
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include"Sales_item.h"

using namespace std; 

int main() {
    Sales_item sum; 
    Sales_item tmp; 
    while (cin >> tmp) {
        sum += tmp; 
    }
    cout << sum << endl; 
    return 0; 
}