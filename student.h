#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num1,const char* name1, char sex1);
private:
	int num;
	char name[20];
	char sex;
	
};
