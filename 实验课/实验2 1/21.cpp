#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "����һ���ַ�" << endl;
	cin >> a;
	if (a >= 'a') { a = a - 'a' + 'A'; cout << "��дΪ" << a<< endl; }
	else { cout << (int)a + 1 << endl; }
	system("pause");
	return 0;
}