#include<iostream>
#include<string>
using namespace std;
class student {
public:
	string id;
	int grades;
};
string max(student*p) {
	int temp;
	string temp1;
	for(int j=0;j<4;j++){
		for (int i = 0;i < j+1;i++) {
			if (p[i].grades < p[i + 1].grades) {
				temp = p[i].grades;
				p[i].grades = p[i + 1].grades;
				p[i + 1].grades = temp;
				temp1 = p[i].id;
				p[i].id = p[i + 1].id;
				p[i + 1].id = temp1;
			}
		}
	}
	return p[0].id;
}
int main() {
	student a[5];
	for (int i = 0;i < 5;i++) {
		cin >> a[i].id >> a[i].grades;
	}
	max(a);
	cout << max(a);
}