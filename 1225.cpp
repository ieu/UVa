#include <stdio.h>

#define DIGIT_SIZE 10

int _count(int n, int seq[], int d) {
	if (n % 10 == n) {
		for (int i = 1; i <= n; ++i) {
			++seq[i];
		}
		return 1;
	}
	seq[0] += 9 * d;
	return _count(n / d, seq, d * 10);
}

int count(int n, int seq[10]) {
	return _count(n, seq, 1);
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, seq[DIGIT_SIZE] = { 0 };
		scanf("%d", &N);
		count(N, seq);
		int i;
		for (i = 0; i < 9; ++i) {
			printf("%d ", seq[i]);
		}
		printf("%d\n", seq[i]);
	}
}