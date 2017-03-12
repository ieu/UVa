#include <cstdio>
#include <algorithm>

using namespace std;

struct Soldier {
	int b, j;

	bool operator < (const Soldier &o) {
		return j > o.j;
	}
};

Soldier s[1000 + 5];

int main(void) {
	for (int N, c = 1; scanf("%d", &N) && N; ++c) {
		for (int i = 0; i < N; ++i) {
			scanf("%d%d", &s[i].b, &s[i].j);
		}
		sort(s, s + N);
		Soldier ss = s[0];
		for (int i = 1; i < N; ++i) {
			if (s[i].b + s[i].j < ss.j) {
				ss.b += s[i].b;
				ss.j -= s[i].b;
			}
			else {
				ss.b += s[i].b;
				ss.j = s[i].j;
			}
		}
		printf("Case %d: %d\n", c, ss.b + ss.j);
	}
}
