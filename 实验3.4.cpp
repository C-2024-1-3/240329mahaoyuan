#include<iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (_area(a, b, c)==0) {
		cout << "�޷����������";
	}
	else {
		cout << "���Ϊ" << _area(a, b, c);
	}
	return 0;
}