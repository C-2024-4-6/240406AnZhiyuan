#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a = 0;
	double x0, x1;
	cout << "������һ��������:" << endl;
	cin >> a;
	if (a < 0)  a = -a; else a = a;//ȡ��������ֵ
	x0 = 0;
	x1 = 1;
	while (fabs(x0 - x1) >= 1e-3)
	{
		x0 = x1;
		x1 = 0.5 * (x0 + a / x0);
     }
	cout<<a<<"�Ŀ���Ϊ"<< x1;
	system("pause");

}