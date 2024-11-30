#include<iostream>
using namespace std;
#include<string>
void count(string s, int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	for (int i = 0;i < s.length();i++) {
		if ((int)s[i] >= 65 && (int)s[i] <= 90) {
			counts[(int)s[i] - 64]++;
		}
		if ((int)s[i] >= 97 && (int)s[i] <= 122) {
			counts[(int)s[i] - 96]++;
		}
	}
	for (int i = 0;i < 26;i++) {
		if (counts[i] != 0) {
			cout << static_cast<char>(i + 64) << ": " << counts[i] << "times" << endl;
		}
	}
}
int main() {
	string s1;
	cin >> s1;
	int counts[26];
	count(s1, counts);
	return 0;
}