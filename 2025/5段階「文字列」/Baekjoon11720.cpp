#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int sum = 0;
	string str;
	cin >> n;
	cin >> str;
	for (int i = 0; i < n; i++) {
		int num = str[i] - 48;
		sum += num;
	}
	cout << sum << '\n';
	return 0;
}