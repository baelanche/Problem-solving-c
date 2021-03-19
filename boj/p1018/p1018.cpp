#include <iostream>
using namespace std;
int N;
int M;
char a[50][50];
int ans = 64;
void check(int, int);
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> a[i][j];
	
	for (int i = 0; i < N - 7; i++)
		for (int j = 0; j < M - 7; j++)
			check(i, j);

	cout << ans;
}
void check(int x, int y) {
	int cnt = 0;
	for (int i = x; i < x + 8; i+=2) {
		for (int j = y; j < y + 8; j+=2) {
			if (a[i][j] != 'B') cnt++;
			if (a[i][j + 1] != 'W') cnt++;
			if (a[i + 1][j] != 'W') cnt++;
			if (a[i + 1][j + 1] != 'B') cnt++;
		}
	}
	cnt = cnt < 64 - cnt ? cnt : 64 - cnt;
	ans = ans < cnt ? ans : cnt;
}