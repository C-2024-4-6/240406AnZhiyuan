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
	cout << "��������������" << endl;
	cin >>a >> b;
	cout << "�������Ϊ" << gcd(a, b) << endl;
	cout << "��С������Ϊ" << a * b/gcd(a, b)   << endl;
	return 0;

}