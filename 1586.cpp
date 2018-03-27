#include <stdio.h>
#include <ctype.h>

float weight(const int element) {
	switch (element) {
	case 'C':
		return 12.01;
	case 'H':
		return 1.008;
	case 'O':
		return 16.00;
	case 'N':
		return 14.01;
	}
}

#define MAXLEN 81

char formula[MAXLEN];

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", formula);
		char chemical;
		int number;
		float mass = 0.0;
		int consumed = 0;
		char *ft = formula;
		while(*(ft += consumed) && sscanf(ft, "%c%n", &chemical, &consumed)) {
			if (isdigit(*(ft+= consumed)))
				sscanf(ft, "%d%n", &number, &consumed);
			else
				consumed = (number = 1) - 1;
			mass += weight(chemical) * number;
		}
		printf("%.3f\n", mass);
	}
}