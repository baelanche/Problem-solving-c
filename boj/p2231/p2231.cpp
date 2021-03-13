#include <iostream>
using namespace std;
int main() {
	int n, ans;
	bool f = false;
	cin >> n;
	for (int i = 1; i <= 1000000; i++) {
		int k = i;
		int sum = i;
		while (k > 0) {
			int mok = k / 10;
			int nam = k % 10;
			sum += nam;
			k /= 10;
		}
		if (sum == n) {
			ans = i;
			f = true;
			break;
		}
	}

	if (f) cout << ans;
	else cout << 0;
}