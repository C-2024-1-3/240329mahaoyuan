#include<iostream>
#include<string>
using namespace std;
int indexof(string s1, string s2) {
	int num = 0;
	for (int i = 0;i < s2.length()- s1.length();i++) {
		for (int j = 0;j < s1.length();j++) {
			if (s2[i + j] == s1[j]) {
				num++;
			}
			if (num == s1.length()) {
				return i + 1;
				break;
			}
		}
	}
	return -1;
}
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout<<indexof(s1, s2);
	return 0;
}