#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

vector<string> ConsecutiveSequences(vector<string>& str) {
    int l=0;
    int r=0;
    vector<string> res;
    while(l<str.size()) {
        while(r+1<str.size() && str[l]==str[r+1]) {
            r++;
        }
        if (r-l>0) {
            res.push_back(str[l]);
            to_string(r-l+1);
            res.push_back(to_string(r-l+1));
        } else {
            res.push_back(str[l]);
        }
        l=r+1;
        r++;
    }
    return res;
}

// int main() {
//     setlocale(LC_ALL, "ru");
//     vector<string> str ={"x","x","y","z","z","z"};
//     const vector<string> res=ConsecutiveSequences(str);
//     for (const auto & re : res) {
//         cout<<re<<"\t";
//     }
//
// }