#include<iostream>
using namespace std;
int main() {
	char x;
	int letters = 0, digits = 0, spaces = 0, others = 0;
    cout << "输入一行字符" << endl;
	while ((x = getchar()) != '\n') {
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
			letters++;
		else if (x >= '0' && x <= '9')digits++;
		else if (x == ' ')spaces++;
		else others++;

	}
	cout << "英文字母有" << letters << "个" << endl;
	cout << "数字有" << digits<< "个" << endl;
	cout << "空格有" << spaces<< "个" << endl;
	cout << "其他字符有" << others << "个" << endl;
	system("pause");
	return 0;
}