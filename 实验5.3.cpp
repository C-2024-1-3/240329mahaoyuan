#include<iostream>
using namespace std;
class chang {
public:
	double length, width, height;
	double cal(double l, double w, double h) {
		return l * w * h;
	}
};
int main() {
	chang a;
	chang b;
	chang c;
	cin >> a.length >> a.width >> a.height;
	cin >> b.length >> b.width >> b.height;
	cin >> c.length >> c.width >> c.height;
	cout << "a���Ϊ" << a.cal(a.length, a.width, a.height) << endl;
	cout << "b���Ϊ" << b.cal(b.length, b.width, b.height) << endl;
	cout << "c���Ϊ" << c.cal(c.length, c.width, c.height) << endl;
	return 0;
}