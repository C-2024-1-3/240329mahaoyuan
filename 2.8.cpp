#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	cout << "请输入一个数" << endl;
	cin >> a;
	double x1 = a, xn;
	if (a < 0) {
		cout << "负数没有平方根" << endl;
	}
	else if (a > 0) {
		
		do {
			xn = (x1 + a / x1) / 2;
			if (abs(xn - x1) < 1e-5) {
				break;
			}
			x1 = xn;
		} while (1);
	}
	cout << xn << endl;
	return 0;
}