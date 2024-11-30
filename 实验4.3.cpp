#include<iostream>
using namespace std;
int main() {
	bool arr[100];
	for (int i = 0;i < 100;i++) {
		arr[i] = 1;
	}
	for (int i = 2;i < 100;i++) {
		for (int num = i;num <= 100;num += i) {
			arr[num-1] = !arr[num-1];
		}
	}
	for (int i = 0;i < 100;i++) {
		if (arr[i] == 1) {
			cout << i + 1 << " ";
		}
	}
	return 0;
}