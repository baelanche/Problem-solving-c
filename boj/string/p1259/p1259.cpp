#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		if (!n) break;
		string str1 = to_string(n);
		string str2;
		int len = str1.length() - 1;
		for (int i = len; i >= 0; i--) {
			str2 += str1[i];
		}
		if (!str1.compare(str2)) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
}