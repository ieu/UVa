#include <iostream>

using namespace std;

#define toggle(x) (x = !x)

int main() {
	char ch;
	bool in_quote = false;
	while (cin >> noskipws >> ch) {
		if (ch == '"') {
			cout << (in_quote ? "''" : "``");
			toggle(in_quote);
		}
		else
			cout << ch;
	}
}
