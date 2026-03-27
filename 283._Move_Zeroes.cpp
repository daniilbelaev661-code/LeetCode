#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int l = 0;
    for(int i = 0 ; i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[l]);
            l++;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    vector<int> nums1 ={0,0,1};
    moveZeroes(nums1);
    for (int i=0;i<nums1.size();i++) {
        cout<<nums1[i]<<"\t";
    }
}