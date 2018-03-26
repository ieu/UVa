#include <cstdio>
#include <cstring>

using namespace std;

#define N 1000

#define MIN(a, b) ( (a) > (b) ? (b) : (a) )

int secret[N], guess[N];
int main() {
	for (int n, t = 1; scanf("%d", &n) == 1 && n; ++t) {
		printf("Game %d:\n", t);
		for (int i = 0; i < n; ++i)
			scanf("%d", secret + i);
		for (;;) {
			for (int i = 0; i < n; ++i)
				scanf("%d", guess + i);
			if (!guess[0])
				break;
			int strong = 0, match = 0;
			for (int *it = secret, *jt = guess; it != secret + n && jt != guess + n; ++it, ++jt)
				if (*it == *jt)
					++strong;
			for (int i = 1; i <= 10; ++i) {
				int snc = 0, gnc = 0;
				for (int *it = secret, *jt = guess; it != secret + n && jt != guess + n; ++it, ++jt) {
					if (*it == i)
						++snc;
					if (*jt == i)
						++gnc;
				}
				match += MIN(snc, gnc);
			}
			printf("    (%d,%d)\n", strong, /* weak = */ match - strong);
		}
	}
}