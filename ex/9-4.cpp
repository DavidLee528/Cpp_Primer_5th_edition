/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210209
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <vector>

using namespace std; 

bool Find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int n); 

int main() {

    int num; 
    cin >> num; 
    vector<int> iv{1, 2, 3, 4, 5}; 
    cout << (Find(iv.cbegin(), iv.cend(), num) == 1 ? "true" : "false") << endl; 

    return 0; 
}

bool Find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int n) {
    for (; begin != end; ++begin) {
        if (*begin == n) return true; 
    }
    return false; 
}