//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"           //��Ҫ©д���У��������ͨ����
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int num1,const char*name1,char sex1) {
    num = num1;
    strcpy(name, name1);
    sex = sex1;

}