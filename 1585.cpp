#include <stdio.h>

int main() {
	int T;
	scanf("%d\n", &T);
	while (T--) {
		int score = 0, consecutive = 0;
		for (char ch; (ch = getchar()) != '\n' && ch != EOF;)
			score += ch == 'O' ? ++consecutive : consecutive = 0;
		printf("%d\n", score);
	}
}