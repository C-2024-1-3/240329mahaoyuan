#include<iostream>
using namespace std;
int main()
{
	int a = 2;
	int temp = 0;
	int day = 1;
	int num = a;
	for (;1;) {
		temp = 2 * a;
		a = temp;
		num = num + a;
		day++;
		if (a > 100) {
			num = num - a;
			day -= 1;
			break;
		}
	}
	cout << "平均价格为" << num * 0.8 / day << endl;
	return 0;
}