#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	double a, b;
	cout << "请输入圆锥的底面半径和锥高" << endl;
	cin >> a >> b;
    double V = a * a * b * PI/3;
	cout << "圆锥的体积是" << V << endl;
	return V;


}

