#include<iostream>
using namespace std;
int main() {
	cout << "请输入两个正整数" << endl;
	int a, b,c,d;
	cin >> a;
	cin >> b;
	for (int i = 1;i <= a && i <= b;i++) {
		if (a % i == 0 && b % i == 0) {
			c = i;
		}
	}
	cout << "最大公约数为" << c << endl;
	for (int j = a * b;j >= (a < b ? b : a);j--) {
		if (j % a == 0 && j % b == 0) {
			d = j;
		}
	}
	cout << "最小公倍数为" <<d<< endl;
	return 0;
}