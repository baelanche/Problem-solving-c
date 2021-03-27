#include <iostream>
using namespace std;
int n, s, cnt, a[20];
void backtracking(int, int);
int main() {
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	backtracking(0, 0);
	cout << cnt;
}
void backtracking(int idx, int sum) {
	if (idx == n) return;
	if (sum + a[idx] == s) cnt++;
	backtracking(idx + 1, sum + a[idx]);
	backtracking(idx + 1, sum);
}