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
	cout << "两数的最大公因数为" << temp<< endl;
	cout << "最小公倍数为" << a*b/temp << endl;
	return temp;
}
int main() {
	int gys(int&, int&);
	int m;
	int n;
	cout << "输入两个自然数" << endl;
	cin >> m >> n;
	gys(m, n);
	
}