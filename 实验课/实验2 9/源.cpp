#include<iostream>
using namespace std;
int main() {
	int sum=0;
	int day = 0;
	
	
	for (int a = 2; a <= 100; a *= 2) 
	{
		sum = sum + a;
		day++;

	}
	cout << "ƽ��ÿ�컨��"<<(sum * 0.8) / day;


}