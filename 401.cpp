#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[10000 + 1];
	const char *M = " 1SE Z  8        A   3  HIL JM O   2TUVWXYS";
	const char *R[] = {
		/* 0 */ "is not a palindrome",
		/* 1 */ "is a regular palindrome",
		/* 2 */ "is a mirrored string",
		/* 3 */ "is a mirrored palindrome"
	};

	while (scanf("%s", s) == 1) {
		int type = 3;
		for (int len = strlen(s), last = len - 1, cond = (len + 1) / 2, i = 0; i < cond && type; ++i, --last) {
			if (type != 2 && s[i] != s[last])
				type -= 1;
			if (type != 1 && s[i] != M[s[last] - '0'])
				type -= 2;
		}
		printf("%s -- %s.\n\n", s, R[type]);
	}
}
