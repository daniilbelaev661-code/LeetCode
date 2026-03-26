#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int removeDuplicates(vector<int>&nums)
{
    unordered_map <int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        if (mp.find(nums[i]) == mp.end()) {
            mp[nums[i]] = i;
        } else {
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    return nums.size();
}

// int main() {
//     setlocale(LC_ALL, "ru");
//     vector <int> nums = {0,0,1,1,1,2,2,3,3,4};
//     cout << foka(nums) << endl;
//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << "\t";
//     }
// }