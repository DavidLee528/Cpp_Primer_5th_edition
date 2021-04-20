/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210202
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std; 

istream & Print(istream & is); 

int main() {
    vector<string> sv {
        "line 1", 
        "line 2", 
        "line 3"
    }; 
    // for (vector<string>::iterator i = sv.begin(); i != sv.end(); ++i) {
    //     istringstream iss(i); 
    //     Print(iss); 
    // }    
    for (size_t i = 0; i != sv.size(); ++i) {
        istringstream iss(sv[i]); 
        Print(iss); 
    }
    
    return 0; 
}

istream & Print(istream & is) {
    string ss; 
    while (is >> ss) {
        cout << ss << endl; 
    }
    is.clear(); 
    return is; 
}