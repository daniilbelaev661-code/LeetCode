#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int j=0,i=m;j<n;j++) {
        nums1[i]=nums2[j];
        i++;
    }
    sort(nums1.begin(),nums1.end());
}

// int main() {
//     setlocale(LC_ALL, "ru");
//     vector<int> nums1 ={1,2,3,0,0,0};
//     vector<int> nums2 ={2,5,6};
//     merge(nums1,3,nums2,3);
//     for (int i=0;i<nums1.size();i++) {
//         cout<<nums1[i]<<'\t';
//     }
//
// }