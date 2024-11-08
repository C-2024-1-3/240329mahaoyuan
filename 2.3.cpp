#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形三边边长" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && b + c > a && a + c > b) {
		cout << "三角形周长为" << a + b + c <<endl;
		if (a == b || b == c || a == c) {
			cout << "该三角形是等腰三角形" << endl;
		}
	}
	else {
		cout << "这不是三角形" << endl;
	}
	return 0;
}
