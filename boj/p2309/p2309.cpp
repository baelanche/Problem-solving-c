#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a(9);
int main() {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) continue;
			int two = a[i] + a[j];
			if (sum - two == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) continue;
						cout << a[k] << '\n';
				}
				return 0;
			}
		}
	}
}