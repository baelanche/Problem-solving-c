#include <stdio.h>
int main() {
	int l, p, v, i = 0, ans;
	while (1) {
		scanf("%d %d %d", &l, &p, &v);
		if (!l) break;
		i++;
		ans = v / p * l + (v % p < l ? v % p : l);
		printf("Case %d: %d\n", i, ans);
	}
}