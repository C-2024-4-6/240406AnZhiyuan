#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a = 0;
	double x0, x1;
	cout << "请输入一个正整数:" << endl;
	cin >> a;
	if (a < 0)  a = -a; else a = a;//取负数绝对值
	x0 = 0;
	x1 = 1;
	while (fabs(x0 - x1) >= 1e-3)
	{
		x0 = x1;
		x1 = 0.5 * (x0 + a / x0);
     }
	cout<<a<<"的开方为"<< x1;
	system("pause");

}