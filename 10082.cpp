#include <iostream>

using namespace std;

const char STR[] = "\t\n                            ;    M0,.9`12345678 L -   AVXSWDFGUHJKNBIOQEARYCQZTZP][  ` ";

int main() {
	char ch;
	while (cin >> noskipws >> ch) {
		cout << STR[ch - '\t'];
	}
}