#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int num1,const char* name1, char sex1);
private:
	int num;
	char name[20];
	char sex;
	
};
