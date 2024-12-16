#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPlace(int i,int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "×ø±êÎª"<<'(' << x << ',' << y<<')' << endl;
	}
};
int main() {
	Point P1;
	P1.setPlace(60,80);
	P1.display();


}