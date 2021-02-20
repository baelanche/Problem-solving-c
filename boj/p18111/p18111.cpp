#include <iostream>
using namespace std;
const int MAX = 500;
int main() {
	int n, m, b;
	cin >> n >> m >> b;
	int a[MAX+1][MAX+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
}