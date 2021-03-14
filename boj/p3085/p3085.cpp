#include <iostream>
using namespace std;
int n;
char a[50][50];
int arrayCheck(int max) {
	int cnt;
	for (int i = 0; i < n; i++) {
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (a[i][j - 1] == a[i][j]) {
				cnt++;
				max = cnt > max ? cnt : max;
			}
			else cnt = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (a[j - 1][i] == a[j][i]) {
				cnt++;
				max = cnt > max ? cnt : max;
			}
			else cnt = 1;
		}
	}
	return max;
}
int main() {
	cin >> n;
	int max = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			char temp1 = a[i][j-1];
			a[i][j - 1] = a[i][j];
			a[i][j] = temp1;

			arrayCheck(max);

			char temp2 = a[i][j - 1];
			a[i][j - 1] = a[i][j];
			a[i][j] = temp2;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			char temp1 = a[j - 1][i];
			a[j-1][i] = a[j][i];
			a[j][i] = temp1;

			arrayCheck(max);

			char temp2 = a[j - 1][i];
			a[j - 1][i] = a[j][i];
			a[j][i] = temp2;
		}
	}

	cout << max;
}