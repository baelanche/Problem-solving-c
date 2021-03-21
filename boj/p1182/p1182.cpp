#include <iostream>
using namespace std;
int main() {
	int n, s;
	cin >> n >> s;
	int *a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	///bt

	free(a);
}