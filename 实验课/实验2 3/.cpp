#include<iostream>
using namespace std;
int main() {
	double a;
	double b;
	double c;
	cout << "���������߳�" << endl;
	cin >> a; cin >> b; cin >> c;
	if (a + b <=c || a + c <= b || b + c <= a) { cout << "�ⲻ��һ��������" << endl; }
	else { cout << "�����ε��ܳ�Ϊ" << a + b + c << endl; if (a == b || b == c || a == c) { cout << "����һ������������" << endl; }
	else { cout << "�ⲻ�ǵ���������" << endl; }
	}
	system("pause");
}