#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	bool flag = true;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			cnt++;
		}
		if (cnt == k) {
			cout << i;
			flag = false;
			break;
		}
	}
	if (flag) cout << 0;
}