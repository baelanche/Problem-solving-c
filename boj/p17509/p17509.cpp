#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> a[11];
int main() {
	for (int i = 0; i < 11; i++)
		cin >> a[i].first >> a[i].second;
	sort(a, a + 11);
	int pen = 0, pre = 0;
	for (int i = 0; i < 11; i++) {
		pen += pre + a[i].first;
		pre += a[i].first;
	}
	for (int i = 0; i < 11; i++)
		pen += 20 * a[i].second;

	cout << pen;
}