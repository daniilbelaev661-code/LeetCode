#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

vector<string> ConsecutiveSequences(vector<int>& nums) {
    int l=0;
    int r =0;
    vector<string> result;
    while (l < nums.size()) {
        while (r+1 < nums.size() && nums[r+1] == nums[r]+1) {
            r++;
        }
        if (r!=l) result.push_back(to_string(nums[l])+"->"+to_string(nums[r]));
        else result.push_back(to_string(nums[l]));
        l=r+1;
        r++;
    }
    return result;
}

// int main() {
//     setlocale(LC_ALL, "ru");
//     vector<int> nums ={1,2,3,1};
//     vector<string> result = ConsecutiveSequences(nums);
//     for (auto i : result) {
//         cout << i << endl;
//     }
// }