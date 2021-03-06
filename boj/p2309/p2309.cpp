#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a(9);
vector<int> ans;
void search(vector<int> c, int idx, int sum) {
	c.push_back(a[idx]);
	sum += a[idx];
	if (sum > 100) return;
	if (sum == 100) {
		ans = c;
		for (int i = 0; i < c.size(); i++)
			cout << c[i] << ' ';
		return;
	}
	search(c, idx + 1, sum);
	c.pop_back();
	sum -= a[idx];
}
int main() {
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	search(ans, 0, 0);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << ' ';
	}
}