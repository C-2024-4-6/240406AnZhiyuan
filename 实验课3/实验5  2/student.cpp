//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include <cstring>
#include"student.h"   //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int num,const char namel[],char sex) {
    num = num;
    strcpy(name, namel);
    sex = sex;
}
