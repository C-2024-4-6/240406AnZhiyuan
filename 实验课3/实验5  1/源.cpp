#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void shurushuchu() {          
		cin >>hour;      //输入设定的时间 
		cin >>minute;
		cin >>sec;
		cout <<hour << ":" <<minute << ":" << sec << endl;

	}
};
int main()
{
	Time t1;
	t1.shurushuchu();
}
