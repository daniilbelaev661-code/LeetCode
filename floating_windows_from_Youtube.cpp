#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int multiplicationNums(vector<int>& nums, const int k)
{
    int maxMult =0;
    int multnums=1;
    int it =0;
    while (it+k <= nums.size()) {
        for(int i=it;i<it+k;i++) {
            multnums *= nums[i];
        }
        if (multnums>maxMult) maxMult=multnums;
        it++;
        if (multnums == 0) multnums=1;
    }
    return maxMult;
}

// int main() {
//     setlocale(LC_ALL, "ru");
//     vector<int> nums ={1,1,1};
//     cout << multiplicationNums(nums,3) << endl;
// }