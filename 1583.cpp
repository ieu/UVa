#include <stdio.h>
#include <string.h>

#define MAXN 100044

int generator[MAXN];

int main() {
	for (int i = 0; i < MAXN; ++i) {
		int digit_sum = 0;
		for (int j = i; j; j /= 10)
			digit_sum += j % 10;
		digit_sum += i;
		if(!generator[digit_sum])
			generator[digit_sum] = i;
	}
	int T;
	scanf("%d", &T);
	while (T--) {
		int N;
		scanf("%d", &N);
		printf("%d\n", generator[N]);
	}
}