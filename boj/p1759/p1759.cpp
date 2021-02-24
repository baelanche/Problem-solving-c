#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool check(string &password) {
	int ja = 0;
	int mo = 0;
	for (char x : password) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
			mo += 1;
		}
		else {
			ja += 1;
		}
	}
	return ja >= 2 && mo >= 1;
}
void go(int n, vector<char> &alpha, string password, int i) {
	if (password.length() == n) {
		if (check(password)) {
			cout << password << '\n';
		}
		return;
	}
	if (i >= alpha.size()) return;
	go(n, alpha, password + alpha[i], i + 1);
	go(n, alpha, password, i + 1);
}
int main() {
	int l, c;
	cin >> l >> c;
	vector<char> alpha(c);
	for (int i = 0; i < c; i++)
		cin >> alpha[i];
	sort(alpha.begin(), alpha.end());
	go(l, alpha, "", 0);
}