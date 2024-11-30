#include<iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (_area(a, b, c)==0) {
		cout << "无法组成三角形";
	}
	else {
		cout << "面积为" << _area(a, b, c);
	}
	return 0;
}