#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;//没有定义变量k，整型变量定义用int而非Int
	cout << i++ << endl;
	//int i = 1;   i重复定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}