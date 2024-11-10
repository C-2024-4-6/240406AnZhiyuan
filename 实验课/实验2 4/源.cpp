#include<iostream>
using namespace std;
int main() {
	char k;
	int a, b;
	cout << "输入运算式" << endl;
	cin >> a >> k >> b;
	switch (k) {
	case'+':cout << a << k << b << '=' << a + b << endl; break;
	case'-':cout << a << k << b << '=' << a - b << endl; break;
	case'*':cout << a << k << b << '=' << a * b << endl; break;
	case'/': {
		if (b != 0) { cout << a << k << b << '=' << a - b << endl; }
		else {
			cout << "除数不能为0" << endl;
		}
	}break;
	default:cout << "无法计算" << endl;
	}
		   system("pause");
			   return 0;

}