#include<iostream>
using namespace std;
int main() {
	double a;
	double b;
	double c;
	cout << "输入三条边长" << endl;
	cin >> a; cin >> b; cin >> c;
	if (a + b <=c || a + c <= b || b + c <= a) { cout << "这不是一个三角形" << endl; }
	else { cout << "三角形的周长为" << a + b + c << endl; if (a == b || b == c || a == c) { cout << "这是一个等腰三角形" << endl; }
	else { cout << "这不是等腰三角形" << endl; }
	}
	system("pause");
}