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
		cout << "请依次输入长方体的长，宽，高" << endl;
		cin >> length >> width >> height;
		v = length * width * height;
		cout << "长方体的体积为" << v << endl;
	}
}; 
int main() {
	V V1,V2,V3;
	V1.caculate();
	V2.caculate();
	V3.caculate();
}