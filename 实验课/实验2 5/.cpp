#include<iostream>
using namespace std;
int main() {
	char x;
	int letters = 0, digits = 0, spaces = 0, others = 0;
    cout << "����һ���ַ�" << endl;
	while ((x = getchar()) != '\n') {
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
			letters++;
		else if (x >= '0' && x <= '9')digits++;
		else if (x == ' ')spaces++;
		else others++;

	}
	cout << "Ӣ����ĸ��" << letters << "��" << endl;
	cout << "������" << digits<< "��" << endl;
	cout << "�ո���" << spaces<< "��" << endl;
	cout << "�����ַ���" << others << "��" << endl;
	system("pause");
	return 0;
}