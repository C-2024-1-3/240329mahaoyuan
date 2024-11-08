#include<iostream>
using namespace std;
int main() {
	char zf;
	cout << "请输入一个小写字符" << endl;
	cin >> zf;
	if (zf >= 'a' && zf <= 'z') {
		cout << static_cast<char>(zf - 32) << endl;
	}
	else {
		cout << static_cast<int>(zf - 2) << endl;
	}
	return 0;
}