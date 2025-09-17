#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int max = 0;
	int index[2] = {1, 1};

	for (int i = 0; i < 81; i++) {
		string input;
		cin >> input;
		int inputNum = stoi(input);
		if(inputNum > max) {
			max = inputNum;
			index[0] = i / 9 + 1;
			index[1] = i % 9 + 1;
		}
	}
	cout << max << "\n" << index[0] << " " << index[1] << "\n";
}