#include <string>
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

string foo(vector<string>& strs)
{
	string ans = "";
	sort(strs.begin(), strs.end());
	int n = strs.size();
	string first = strs[0], last = strs[n - 1];
	for (int i = 0; i < min(first.size(), last.size()); i++) {
		if (first[i] != last[i]) {
			return ans;
		}
		ans += first[i];
	}
	return ans;
}

int main() {
	setlocale(LC_ALL, "ru");
	vector<string> arr = { "dog","dacecar","dar" };
	cout << foo(arr);
}