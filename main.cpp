#include<iostream>

using namespace std;

int main() {
	char c;

	while (cin >> c) {
		c = c < 'a' ? c + ('a' - 'A') : c;
		if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') cout << '.' << c;
	}
}
