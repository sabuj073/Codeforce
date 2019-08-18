#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	int n = a + b;
	int ans = 0;
	int l = 1;
	while (l <= n){
		int g = n / l;

		if (a < g || b < g){
			l = n / g + 1;
			continue;
		}

		int r = n / g;

		int a_low = (a + g) / (g + 1);
		int a_high = a / g;
		int b_low = (b + g) / (g + 1);
		int b_high = b / g;

		if (a_low <= a_high && b_low <= b_high)
			ans += max(0, min(r, a_high + b_high) - max(l, a_low + b_low) + 1);
		l = r + 1;
	}

	printf("%d\n", ans);
}
