#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> a[100000];
bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second)
		return 1;
	if (a.second == b.second)
		return a.first < b.first;
	return 0;
}
int main() {
	int n, pre = 0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n, compare);
	for (int i = 0; i < n; i++) {
		int s = a[i].first;
		int e = a[i].second;
		if (pre > s) continue;
		else {
			cnt++;
			pre = e;
		}
	}
	cout << cnt;
}