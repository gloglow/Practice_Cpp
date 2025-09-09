#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int* n = new int[26];
	for (int i = 0; i < 26; i++) {
		n[i] = -1;
	}
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++){
		int index = str[i] - 'a';
		if(n[index] == -1)
			n[index] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << n[i] << ' ';
	}
	return 0;
}