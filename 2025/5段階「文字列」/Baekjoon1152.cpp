#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);
	char tmp = NULL;
	int cnt = 0;

	for (char c : str) {
		if (c != ' ') {
			if (tmp == NULL || tmp == ' ') {
				cnt++;
			}
		}
		tmp = c;
	}
	cout << cnt;

	return 0;
}