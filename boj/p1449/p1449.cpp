#include <iostream>
using namespace std;
int main() {
	int n, l, a[1001];
	for (int i = 1; i < 1001; i++)
		a[i] = 0;
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		int h;
		cin >> h;
		a[h] = 1;
	}
	int cnt = 0;
	for (int i = 1; i < 1001; i++) {
		if (a[i]) {
			i += l - 1;
			cnt++;
		}
	}
	cout << cnt;
}