#include<iostream>
using namespace std;
class V {
private:
	int length;
	int width;
	int height;
	int v;
public:
	void caculate() 
	{
		cout << "���������볤����ĳ�������" << endl;
		cin >> length >> width >> height;
		v = length * width * height;
		cout << "����������Ϊ" << v << endl;
	}
}; 
int main() {
	V V1,V2,V3;
	V1.caculate();
	V2.caculate();
	V3.caculate();
}