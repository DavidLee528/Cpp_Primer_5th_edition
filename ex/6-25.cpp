/*
 * @ Author: 李天昊
 * @ Description: 处理命令行选项
 * @ Date: 20210114
 * @ E-mail: 13121515269@163.com
 */

#include<iostream>
#include<string>

using namespace std; 

/**
 * @brief 要求从命令行接收两个参数，将它们连接成一个string对象并输出
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv) {
    string str = (string)*(argv + 1) + (string)*(argv + 2); 
    cout << str << endl; 
    return 0; 
}
