#include <iostream>
using namespace std;
int a[10][10];
bool c[10][10];
int n, m, k;
int ans = -2147483647;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
void go(int cnt, int sum) {
	if (cnt == k) {
		if (ans < sum) ans = sum;
		return;
	}
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			if (c[x][y]) continue;
			bool ok = true;
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (0 <= nx && nx < n && 0 <= ny && ny < m) {
					if (c[nx][ny]) ok = false;
				}
			}
			if (ok) {
				c[x][y] = true;
				go(cnt + 1, sum + a[x][y]);
				c[x][y] = false;
			}
		}
	}
}
int main() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	go(0, 0);
	cout << ans << '\n';
}