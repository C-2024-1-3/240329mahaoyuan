#include<iostream>
using namespace std;
class point{
private:
	int x, y;
public:
	point(int a, int b) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << x << endl;
		cout << y << endl;
	}
};
int main() {
	point p1(60,80);
	int i, j;
	cin >> i >> j;
	p1.setPoint(i, j);
	p1.display();
}