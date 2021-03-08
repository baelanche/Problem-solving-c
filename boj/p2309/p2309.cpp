#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a(9);
vector<int> ans;
void search(vector<int> c, int idx, int sum) {
	if (sum > 100) return;
	if (sum == 100) {
		ans = c;
		for (int i = 0; i < c.size(); i++)
			cout << c[i] << '\n';
		return;
	}
	c.push_back(a[idx]);
	sum += a[idx];
	search(c, idx + 1, sum);
	c.pop_back();
	sum -= a[idx];
	search(c, idx, sum);
}
int main() {
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	search(ans, 0, 0);
}