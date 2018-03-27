#include <stdio.h>
#include <string.h>

int main(void) {
	int T;
	scanf("%d", &T);

	char sequence[101];
	while (T--) {
		scanf("%s", sequence);
		int smallest = 0;
		int len = strlen(sequence);
		for (int i = 1; i < len; ++i) {
			for (int j = smallest, k = i, l = 0; l < len; ++l) {
				int m = j++ % len, n = k++ % len;
				if (sequence[m] > sequence[n]) {
					smallest = i;
					break;
				}
				else if (sequence[m] == sequence[n]) {
					continue;
				}
				else {
					break;
				}
			}
		}
		for (int i = 0; i < len; ++i) {
			putchar(sequence[(i + smallest) % len]);
		}
		putchar('\n');
	}
}