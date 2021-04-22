/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210210
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

string FirstElement(const vector<string> sv); 

int main() {
    vector<string> vec; 
    cout << FirstElement(vec) << endl; 
    return 0; 
}

string FirstElement(const vector<string> sv) {
    return sv.front(); 
    // return sv.at(0); 
    // return sv[0]; 
    // return *sv.begin(); 
}
