#include <iostream>
using namespace std;
int sum = 0;
int n, s;
int main() {
	cin >> n >> s;
	int *a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	///bt

	free(a);
}

void backtracking() {
	if (sum == n) return;
}