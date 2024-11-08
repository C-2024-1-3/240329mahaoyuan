#include<iostream>
using namespace std;
int main() {
        int letterCount = 0; //英文字母个数
        int spaceCount = 0; // 空格个数
        int digitCount = 0; // 数字字符个数
        int otherCount = 0; // 其它字符个数
        char ch;
        cout << "请输入一行字符：";
        while ((ch = getchar()) != '\n') {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                letterCount++;
            }
            else if (ch == ' ') {
                spaceCount++;
            }
            else if (ch >= '0' && ch <= '9') {
                digitCount++;
            }
            else {
                otherCount++;
            }
        }
        cout << "英文字母个数：" << letterCount << endl;
        cout << "空格个数：" << spaceCount << endl;
        cout << "数字字符个数：" << digitCount << endl;
        cout << "其它字符个数：" << otherCount << endl;
        return 0;
	return 0;
}