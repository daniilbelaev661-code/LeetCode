#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int index = 0;
    for (;index < nums.size(); index++) {
        if (nums[index] > target) break;
        if (nums[index] == target) return index;
        if (index == nums.size()-1) return index+1;
    }
    return target > nums[index] ? index+1 : index;
}

// int main() {
//     setlocale(LC_ALL, "ru");
//     vector <int> nums={1,3,5,6};
//     cout << searchInsert(nums, 7) << endl;
//     for (auto i : nums) cout << i << "\t";
//
// }