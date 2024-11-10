#include<iostream>
using namespace std;
int gcd(int m,int n) {
	int temp = m > n? n : m;
	while (temp)
	{
		if (m % temp == 0 && n % temp == 0)
		{
			break;
		}
		--temp;
	}
	
	return temp;
}
int main() {
	int a, b,c,d;
	cout << "输入两个正整数" << endl;
	cin >>a >> b;
	cout << "最大公因数为" << gcd(a, b) << endl;
	cout << "最小公倍数为" << a * b/gcd(a, b)   << endl;
	return 0;

}