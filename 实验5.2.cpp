//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
int main()
{
	Student stud;                //�������
	stud.set_value(007,"tcg", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}