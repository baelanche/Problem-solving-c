#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef struct {
	int number;
	int strike;
	int ball;
} Game;
vector<Game> v;
int possible;
int cnt;
int n;
void check(string);
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		Game g;
		g.number = a;
		g.strike = b;
		g.ball = c;
		v.push_back(g);
	}

	for (int j = 123; j <= 987; j++)
		check(to_string(j));

	cout << cnt;
}
void check(string candidate) {
	for (int i = 0; i < v.size(); i++) {
		if (candidate[0] == candidate[1] || candidate[0] == candidate[2] || candidate[1] == candidate[2]
			|| candidate[1] == '0' || candidate[2] == '0')
			continue;
		string number = to_string(v[i].number);
		int strike = v[i].strike;
		int ball = v[i].ball;

		int sameidx = 0;
		int sameval = 0;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (candidate[j] == number[k]) {
					if (j == k) sameidx++;
					else sameval++;
				}
			}
		}
		if (sameidx == strike && sameval == ball) possible++;
	}
	if (possible == n)
		cnt++;
	possible = 0;
}