#include <iostream>
using namespace std;
int main() {
	int n, k, a[10], ans = 0;
	cin >> n >> k;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		ans += k / a[i];
		k %= a[i];
	}
	cout << ans;
}