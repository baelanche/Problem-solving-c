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
int n, k, a[100], c[100] = { 0, }, ans = 0;
void init();
void logic();
void connectPlug();
int disconnectPlug();
void print();
int main() {
	init();
	logic();
	print();
}

void init() {
	cin >> n >> k;
	for (int i = 0; i < k; i++)
		cin >> a[i];
}

void logic() {
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			//if(c[j] == 0)
				//connectPlug(a[i], )
		}
	}
}

void connectPlug() {

}

int disconnectPlug() {
	return 0;
}

void print() {
	cout << ans;
}