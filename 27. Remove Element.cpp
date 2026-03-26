#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int removeElement(vector<int>&nums, int val)
{
    int index = 0;
    for(int i = 0; i< nums.size(); i++){
        if(nums[i] != val){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main() {
    setlocale(LC_ALL, "ru");
    vector <int> nums={4,5};
    cout << removeElement(nums, 4) << endl;
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << "\t";
    }
}