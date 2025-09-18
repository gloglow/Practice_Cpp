#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	char charArr[5][15];
	for (int i = 0; i < 5; i++) {
		string str;
		getline(cin, str);
		int j;
		for (j = 0; j < str.length(); j++) {
			charArr[i][j] = str[j];
		}
		for (; j < 15; j++) {
			charArr[i][j] = '\0';
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			char c = charArr[j][i];
			if (c == '\0') continue;
			cout << c;
		}
	}
}