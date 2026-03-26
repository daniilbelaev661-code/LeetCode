#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    int end = digits.size()-1;
    digits[end]++;
    while (end>0) {
        if (digits[end]==10) {
            digits[end]=0;
            digits[--end]++;
            continue;
        }
        break;
    }
    if (end == 0 and digits[end]==10) {
        digits[end]=0;
        digits.insert(digits.begin(),1);
    }
    return digits;
}
// 9 9 9 9 9
int main() {
    setlocale(LC_ALL, "ru");
    vector<int> nums ={9,9,9};
    vector<int> digits = plusOne(nums);
    for (int i =0;i<digits.size();i++) {
        cout<<digits[i]<<"\t";
    }
}