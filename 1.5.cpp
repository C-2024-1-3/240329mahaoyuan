#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << "请输入华氏温度" << endl;
	double h;
	cin >> h;
	double s = (h - 32) * 5 / 9;
	cout << "保留两位小数的摄氏温度为" << fixed<<setprecision(2) << s << endl;
	return 0;
}