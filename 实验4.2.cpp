#include<Iostream>
using namespace std;
int main(){
	double list[10];
	for (int i = 0;i < 10;i++) {
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <9; j++)
			if (list[j] > list[j + 1])
			{
				double swap = list[j];
				list[j] = list[j + 1];
				list[j + 1] = swap;
				changed = true;
			}
	} while (changed);
	for (int i = 0;i < 10;i++) {
		cout<< list[i];
	}
	return 0;
}