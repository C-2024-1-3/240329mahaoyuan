#include<iostream>
using namespace std;
void bi(int*arr ,int n) {
	for (int i = 0;i < n-1;i++) {
		for (int j = 0;j < n-1;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	bi(arr,n);
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	delete arr;
	return 0;
}