#include <iostream>
using namespace std;
/*
1. 플러그에 빈 공간이 있으면 플러그를 꼽는다.

2. 플러그에 빈 공간이 없으면 이미 꽂혀져 있는 기기에 대한 사용 계획을 찾아야 한다.

2-0. 꽂혀져 있는 플러그와 지금 꽂을 플러그가 같은 기기라면 통과한다.

2-1. 꽂혀져 있는 플러그 중 이후에 사용 계획이 없다면 최우선으로 뽑는다.

2-2. 꽂혀져 있는 플러그 모두가 이후에도 사용 계획이 있다면 사용 계획이 느린 것부터 뽑는다.

a : 전기용품이 꽂힐 순서 정보를 담은 배열
c : 멀티탭에 어떤 전기용품이 꽂혀있는지에 대한 정보를 담은 배열
*/
int n, k, a[100], c[100], ans = 0;
void scan();
void logic();
int disconnectPlug();
void print();
int main() {
	scan();
	logic();
	print();
}

void scan() {
	cin >> n >> k;
	for (int i = 0; i < k; i++)
		cin >> a[i];
}

void logic() {
	for (int i = 0; i < k; i++) {

	}
}

int disconnectPlug() {

}

void print() {
	cout << ans;
}