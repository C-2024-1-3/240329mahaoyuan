#include<iostream>
using namespace std;
int a(int m,int n) {
	for (int i = m;1;i--) {
		if ((m % i == 0) && (n % i == 0)) {
			int k = i;
			break;
			return k;
		}
	}
}
int main(){
	int m, n;
	cin >> m >> n;
	cout <<"���Լ��Ϊ"<< a(m, n) << endl;
	cout << "��С������Ϊ" << m * n / a(m, n);
	return 0;
}