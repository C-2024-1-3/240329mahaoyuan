#include<iostream>
using namespace std;
int main() 
{
        double num1, num2;
        char op;
        cout << "请输入第一个数：";
        cin >> num1;
        cout << "请输入运算符（+、-、*、/、%）：";
        cin >> op;
        cout << "请输入第二个数：";
        cin >> num2;
        switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
       
        case '-':
            cout << num1-num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 / num2 << endl;
            }
            if (num2 == 0) {
                cout << "除数不能为0" << endl;
            }
            break;
        case '%':
        {
            if (num2 != 0) {
                cout << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            }
            break;
            if(num2==0) {
                cout << "除数不能为0" << endl;
            }
        }
        default:
            cout << "非法运算符！" << endl;
        }
        
	return 0;
}