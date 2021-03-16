#include <iostream>
using namespace std;
int a[101];
void eureka(int l) {
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			for (int k = 1; k <= 100; k++) {
				if (a[i] + a[j] + a[k] == l) {
					cout << 1 << "\n";
					return;
				}
			}
		}
	}
	cout << 0 << "\n";
}
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= 100; i++) {
		a[i] = i * (i + 1) / 2;
	}
	while (t-->0) {
		int k;
		cin >> k;
		eureka(k);
	}
}