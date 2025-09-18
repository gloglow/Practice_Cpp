#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	int n;
	int sum = 0;
	cin >> str >> n;
	
	for(int i = 0; i < str.length(); i++) {
		int tmp = 0;
		if (str[i] >= 'A') {
			tmp += str[i] - 'A' + 10;
		}
		else {
			tmp += str[i] - '0';
		}
		sum += tmp * pow(n, str.length() - i - 1);
	}

	cout << sum;
}