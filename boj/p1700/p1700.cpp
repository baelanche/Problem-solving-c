#include <iostream>
using namespace std;
/*
1. �÷��׿� �� ������ ������ �÷��׸� �Ŵ´�.

2. �÷��׿� �� ������ ������ �̹� ������ �ִ� ��⿡ ���� ��� ��ȹ�� ã�ƾ� �Ѵ�.

2-0. ������ �ִ� �÷��׿� ���� ���� �÷��װ� ���� ����� ����Ѵ�.

2-1. ������ �ִ� �÷��� �� ���Ŀ� ��� ��ȹ�� ���ٸ� �ֿ켱���� �̴´�.

2-2. ������ �ִ� �÷��� ��ΰ� ���Ŀ��� ��� ��ȹ�� �ִٸ� ��� ��ȹ�� ���� �ͺ��� �̴´�.

a : �����ǰ�� ���� ���� ������ ���� �迭
c : ��Ƽ�ǿ� � �����ǰ�� �����ִ����� ���� ������ ���� �迭
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