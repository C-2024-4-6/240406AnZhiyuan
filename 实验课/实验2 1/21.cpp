#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "输入一个字符" << endl;
	cin >> a;
	if (a >= 'a') { a = a - 'a' + 'A'; cout << "大写为" << a<< endl; }
	else { cout << (int)a + 1 << endl; }
	system("pause");
	return 0;
}