#include<iostream>
using namespace std;
int hzct(int a) {
	int num;
	if (a == 10)
	{
		num = 1;
		return num;
	}
	else
		num = (hzct(a + 1) + 1) * 2;
	return num;
}
int main() {
	int b = 1;
	cout << "��һ��ժ�ҵ�����Ϊ" << hzct(b) << endl;
	return 0;
	
}