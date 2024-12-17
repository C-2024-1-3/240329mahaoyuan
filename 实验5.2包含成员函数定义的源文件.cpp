//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"           //不要漏写此行，否则编译通不过
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 4996)
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int num1,const char*name1,char sex1) {
    num = num1;
    strcpy(name, name1);
    sex = sex1;

}