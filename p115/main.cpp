#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << " �� �� ����" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << "�Դϴ�." << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << "�Դϴ�." << endl;
}