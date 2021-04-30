/*
 * @ Author: 李天昊
 * @ Description: 
 * @ Date: 20210213
 * @ E-mail: 13121515269@163.com
 */

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <string>

using namespace std; 

template<typename Sequence> inline ostream & PrintLn(Sequence const & seq); 
inline bool isShorter(string const & lhs, string const & rhs); 
void ElimDups(vector<string> & sv); 


int main() {

    vector<string> vec {
        "1234", "1234", "1234", "Hi", "alan", "wang"
    }; 

    ElimDups(vec); 
    stable_sort(vec.begin(), vec.end(), isShorter); 
    PrintLn(vec); 

    return 0; 
}

template<typename Sequence>
inline ostream & PrintLn(Sequence const & seq) {
    for (auto const & elem : seq) cout << elem << ' '; 
    cout << endl; 
    return cout; 
}

inline bool isShorter(string const & lhs, string const & rhs) {
    return lhs.size() < rhs.size(); 
}

void ElimDups(vector<string> & sv) {
    sort(sv.begin(), sv.end()); 
    auto newEnd = unique(sv.begin(), sv.end()); 
    sv.erase(newEnd, sv.end()); 
}

