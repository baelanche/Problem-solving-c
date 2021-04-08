#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
pair<int, int> a[200000];
priority_queue<int, vector<int>, greater<int>> pq;
bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first < b.first) return 1;
	if (a.first == b.first) return a.second < b.second;
	return 0;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + n, compare);
	for (int i = 0; i < n; i++) {
		int end = a[i].second;
		if (!pq.empty() && pq.top() <= a[i].first)
			pq.pop();
		pq.push(end);
	}
	cout << pq.size();
}