#include <iostream>
using namespace std;
int main() {
	int n, x, a[10000];
	cin >> n >> x;
	int idx = 0;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k < x) {
			a[idx] = k;
			idx++;
		}
	}
	for (int i = 0; i < idx; i++) {
		cout << a[i] << ' ';
	}
}