#include <iostream>
using namespace std;
int main() {
	const int SIZE = 10;
	int numbers[SIZE];
	int distinctNumbers[SIZE];
	int distinctCount = 0;
	cout << "ÇëÊäÈë10¸öÊý£º" << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> numbers[i];
		bool isNew = true;
		for (int j = 0; j < distinctCount; ++j) {
			if (numbers[i] == distinctNumbers[j]) {
				isNew = false;
				break;
			}
		}
		if (isNew) {
			distinctNumbers[distinctCount] = numbers[i];
			distinctCount++;
		}
	}
	for (int i = 0; i < distinctCount; ++i) {
		cout << distinctNumbers[i] << " ";
	}
	cout << endl;
	return 0;
}