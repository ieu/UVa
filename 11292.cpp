#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 20000 + 5

int A[MAX], B[MAX];

int main(void) {
	int n, m;
	while (scanf("%d%d", &n, &m) && n && m) {
		for (int i = 0; i < n; ++i) {
			scanf("%d", A + i);
		}
		for (int i = 0; i < m; ++i) {
			scanf("%d", B + i);
		}
		sort(A, A + n);
		sort(B, B + m);

		int i = 0, j = 0, c = 0;
		while (i < n && j < m) {
			if (B[j] >= A[i]) {
				++i;
				c += B[j];
				++j;
			}
			else {
				++j;
			}
		}
		if (i < n) {
			printf("Loowater is doomed!\n");
		}
		else {
			printf("%d\n", c);
		}
	}
}
