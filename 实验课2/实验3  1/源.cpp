#include<iostream>
using namespace std;
int gys(int& a, int& b)
{
	int temp =a > b ? a: b;
	while (temp)
	{
		if (a % temp == 0 && b % temp == 0)
			break;
		--temp;
	}
	cout << "�������������Ϊ" << temp<< endl;
	cout << "��С������Ϊ" << a*b/temp << endl;
	return temp;
}
int main() {
	int gys(int&, int&);
	int m;
	int n;
	cout << "����������Ȼ��" << endl;
	cin >> m >> n;
	gys(m, n);
	
}