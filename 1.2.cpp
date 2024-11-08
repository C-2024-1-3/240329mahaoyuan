#include<iostream>
using namespace std;

const double pi = 3.14159265358979323846;
int main() {
	double r,h;
	cout << "请输入圆锥半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	double v = r * r * h * pi / 3;
	cout << "圆锥的体积为" << v << endl;
	return 0;
}