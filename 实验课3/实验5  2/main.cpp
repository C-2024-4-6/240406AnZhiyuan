//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include<cstring>
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	Student stud1;
	stud.display();
	stud1.set_value(007, "tcg", 'm');//ִ��stud�����display����
	return 0;
}
