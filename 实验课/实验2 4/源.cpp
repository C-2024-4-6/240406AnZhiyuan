#include<iostream>
using namespace std;
int main() {
	char k;
	int a, b;
	cout << "��������ʽ" << endl;
	cin >> a >> k >> b;
	switch (k) {
	case'+':cout << a << k << b << '=' << a + b << endl; break;
	case'-':cout << a << k << b << '=' << a - b << endl; break;
	case'*':cout << a << k << b << '=' << a * b << endl; break;
	case'/': {
		if (b != 0) { cout << a << k << b << '=' << a - b << endl; }
		else {
			cout << "��������Ϊ0" << endl;
		}
	}break;
	default:cout << "�޷�����" << endl;
	}
		   system("pause");
			   return 0;

}